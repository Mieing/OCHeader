@interface AWEDPUGLinkProxyStep : AWEWorkflowStep

+ (void)registerExperiment;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (BOOL)enableLinkProxyWithexposure:(BOOL)a0;
- (id)errorMsgForCode:(long long)a0;
- (void)requestProxyForScheme:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
