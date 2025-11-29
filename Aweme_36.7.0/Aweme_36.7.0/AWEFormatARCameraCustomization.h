@class NSObject, BDXBridgeFormatOpenARCameraMethodParamModel;
@protocol MTLJSONSerializing;

@interface AWEFormatARCameraCustomization : NSObject <AWEStudioCameraCustomization>

@property (retain, nonatomic) BDXBridgeFormatOpenARCameraMethodParamModel *paramModel;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
