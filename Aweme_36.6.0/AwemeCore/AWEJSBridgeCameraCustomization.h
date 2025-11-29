@class BDXBridgeStudioComposerExportMethodParamModel, NSObject;
@protocol MTLJSONSerializing;

@interface AWEJSBridgeCameraCustomization : NSObject <AWEStudioCameraCustomization>

@property (retain, nonatomic) BDXBridgeStudioComposerExportMethodParamModel *paramModel;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void)resetRecordConfig:(id)a0 paramModel:(id)a1;
- (void)resetAlbumConfig:(id)a0 paramModel:(id)a1;
- (void)resetEditConfig:(id)a0 paramModel:(id)a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
