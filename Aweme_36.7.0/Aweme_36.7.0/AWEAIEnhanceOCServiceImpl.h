@class NSString;

@interface AWEAIEnhanceOCServiceImpl : HTSService <AWEStudioAIEnhanceOCServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLoadingViewWithTagList:(id)a0;
- (id)currentPreviewImageForNLE:(id)a0;

@end
