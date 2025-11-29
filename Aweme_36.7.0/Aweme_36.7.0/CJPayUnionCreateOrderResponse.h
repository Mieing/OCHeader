@class NSString, CJPayUnionPaySignInfo, CJPayErrorButtonInfo;

@interface CJPayUnionCreateOrderResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayUnionPaySignInfo *unionPaySignInfo;
@property (copy, nonatomic) NSString *unionIconUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
