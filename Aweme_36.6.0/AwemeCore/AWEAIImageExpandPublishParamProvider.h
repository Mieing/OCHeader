@class NSString;

@interface AWEAIImageExpandPublishParamProvider : NSObject <AWEPublishTrackParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsForPublish:(id)a0 publishModel:(id)a1;
- (id)paramsForPublishFinish:(id)a0 publishModel:(id)a1;
- (id)params:(id)a0 publishModel:(id)a1;

@end
