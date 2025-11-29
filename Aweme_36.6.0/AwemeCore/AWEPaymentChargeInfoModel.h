@class AWEPaymentPreviewConfigModel, NSString;

@interface AWEPaymentChargeInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL isChargeContent;
@property (nonatomic) BOOL isSubscribeContent;
@property (nonatomic) BOOL hasPaid;
@property (retain, nonatomic) AWEPaymentPreviewConfigModel *previewConfigModel;
@property (nonatomic) BOOL useDemotion;
@property (nonatomic) BOOL isDeviceOver;
@property (copy, nonatomic) NSString *hasRightText;
@property (nonatomic) BOOL disableAutoOpenPayPage;
@property (copy, nonatomic) NSString *noRightText;
@property (copy, nonatomic) NSString *maskText;

+ (id)previewConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
