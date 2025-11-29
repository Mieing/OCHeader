@interface WCEditImageCropToolBarViewUIConfig : NSObject

@property (nonatomic) BOOL createRotateBtn;
@property (nonatomic) BOOL createCropProportionBtn;
@property (nonatomic) BOOL deSelectCropProportionAfterReverting;
@property (nonatomic) BOOL proportionCropAtFirstTime;
@property (nonatomic) BOOL revertBtnLayoutCenter;

+ (id)defaultConfig;

@end
