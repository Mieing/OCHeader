@class NSDictionary, CJPayTradeVerifyInfoModel;

@interface CJPayTradeVerifyResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayTradeVerifyInfoModel *tradeVerifyInfo;
@property (copy, nonatomic) NSDictionary *exts;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
