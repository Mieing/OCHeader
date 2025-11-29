@class AWEIMFaceToFaceImageGeckoSetting, AWEIMSpringFaceToFaceActivityModel;

@interface AWEIMFaceToFaceDefaultConfigManager : NSObject

@property (retain, nonatomic) AWEIMSpringFaceToFaceActivityModel *faceToFaceActivityModel;
@property (retain, nonatomic) AWEIMFaceToFaceImageGeckoSetting *geckoImageSetting;

+ (id)sharedInstance;

- (id)faceToFacePanelKeyboardData;
- (void)setupDefaultConfig;
- (id)faceToFaceViewConfig;
- (void).cxx_destruct;
- (id)init;

@end
