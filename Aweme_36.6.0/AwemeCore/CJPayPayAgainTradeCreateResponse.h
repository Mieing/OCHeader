@class NSDictionary, CJPayBDCreateOrderResponse;

@interface CJPayPayAgainTradeCreateResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayBDCreateOrderResponse *pageInfo;
@property (copy, nonatomic) NSDictionary *verifyPageInfoDict;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
