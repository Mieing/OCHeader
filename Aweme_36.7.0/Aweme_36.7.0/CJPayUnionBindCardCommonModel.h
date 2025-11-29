@class NSString, CJPayUnionPaySignInfo;

@interface CJPayUnionBindCardCommonModel : JSONModel

@property (copy, nonatomic) NSString *promotionTips;
@property (nonatomic) BOOL isShowMask;
@property (nonatomic) BOOL isAliveCheck;
@property (retain, nonatomic) CJPayUnionPaySignInfo *unionPaySignInfo;
@property (copy, nonatomic) NSString *unionIconUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
