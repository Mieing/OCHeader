@class NSString;

@interface AWEImageTemplatePublishParamProvider : NSObject <AWEPublishTrackParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_trackParamsForPublishModel:(id)a0;
- (id)paramsForPublish:(id)a0 publishModel:(id)a1;
- (id)paramsForPublishFinish:(id)a0 publishModel:(id)a1;

@end
