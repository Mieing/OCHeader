@class BaseRequest, NSString, BizScanTabBarInfo;

@interface BizScanBarcodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *barcode;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int mode;
@property (retain, nonatomic) BizScanTabBarInfo *tabBarInfo;

+ (void)initialize;

@end
