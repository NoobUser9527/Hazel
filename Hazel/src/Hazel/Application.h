#pragma once

#include "Core.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT 在客户端中定义
	Application* CreateApplication();

}