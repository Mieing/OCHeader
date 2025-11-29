@class NSString;

@interface AWEStudioPublishRouterGenericTemplateServiceImpl : NSObject <AWEStudioPublishRouterGenericTemplateService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startVideoWithGenericTemplateId:(id)a0 templateType:(long long)a1 trackParams:(id)a2 mvSource:(id)a3 completion:(id /* block */)a4;
- (void)startVideoWithGenericTemplateModel:(id)a0 trackParams:(id)a1 mvSource:(id)a2 completion:(id /* block */)a3;

@end
