@class NSString, APCDTOComposerApi;
@protocol AWEStudioCameraCustomization;

@interface AWEStudioComposerInputWrapperImpl : NSObject <AWEStudioComposerInputWrapper>

@property (retain, nonatomic) APCDTOComposerApi *composerModel;
@property (retain, nonatomic) id<AWEStudioCameraCustomization> cameraCustomization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
