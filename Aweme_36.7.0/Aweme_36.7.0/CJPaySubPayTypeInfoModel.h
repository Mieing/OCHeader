@class NSString, NSDictionary, CJPaySubPayTypeData, CJPayDefaultChannelShowConfig;

@interface CJPaySubPayTypeInfoModel : CJPayChannelModel <CJPayRequestParamsProtocol>

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *subPayType;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *descTitle;
@property (nonatomic) long long way;
@property (nonatomic) BOOL isChoosed;
@property (copy, nonatomic) NSString *homePageShow;
@property (retain, nonatomic) CJPaySubPayTypeData *payTypeData;
@property (copy, nonatomic) NSDictionary *payTypeDataDic;
@property (weak, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (readonly, nonatomic, getter=channelType) unsigned long long channelType;
@property (readonly, nonatomic) BOOL isCombinePay;
@property (copy, nonatomic) NSString *tradeConfirmButtonText;
@property (copy, nonatomic) NSString *extParamStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildParams;
- (id)buildShowConfig;
- (id)requestNeedParams;
- (id)p_identifyWithPayType:(id)a0;
- (void).cxx_destruct;

@end
