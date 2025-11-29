@class NSString, NSMutableDictionary, NSArray, AWEWebcastCodeGenGetTagResponseDataModel;

@interface AWEPublishPaymentPreviewItem : NSObject

@property (retain, nonatomic) AWEWebcastCodeGenGetTagResponseDataModel *tagModel;
@property (nonatomic) BOOL hostingSwitchOn;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long paidType;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *configContent;
@property (copy, nonatomic) NSString *priceConfigContent;
@property (copy, nonatomic) NSString *defaultContent;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *paymentModeStr;
@property (copy, nonatomic) NSArray *combProducts;
@property (nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL disableClick;

- (id)initWithIconImageName:(id)a0 itemName:(id)a1 configContent:(id)a2 defaultContent:(id)a3;
- (void).cxx_destruct;

@end
