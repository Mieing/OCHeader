@class NSObject;
@protocol MTLJSONSerializing;

@interface AWECommentMediaPickerCustomization : NSObject <AWEStudioCameraCustomization>

@property (copy, nonatomic) id /* block */ finishHandler;
@property (copy, nonatomic) id /* block */ configAlbumInputData;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void)p_updateAlbumConfig:(id)a0;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
