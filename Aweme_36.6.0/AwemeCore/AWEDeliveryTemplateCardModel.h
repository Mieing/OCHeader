@class NSDictionary, BDPCDDynamicCardTemplateModel;

@interface AWEDeliveryTemplateCardModel : AWEDeliveryBaseMsgModel

@property (copy, nonatomic) NSDictionary *dynamicData;
@property (nonatomic, getter=isSystemMsgStyle) BOOL systemMsgStyle;
@property (nonatomic) BOOL isLastElementFootTips;
@property (nonatomic) long long supportSDKVersion;
@property (retain, nonatomic) BDPCDDynamicCardTemplateModel *templateModel;

+ (Class)cellClass;

- (id)getPathForTemplateCardHttpRequest:(id)a0;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (id)initWithMessage:(id)a0;

@end
