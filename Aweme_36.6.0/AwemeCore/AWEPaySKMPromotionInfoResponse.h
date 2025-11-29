@class NSArray, NSString;
@protocol AWEPaySKMPromotionInfo;

@interface AWEPaySKMPromotionInfoResponse : CJPayBaseResponse

@property (retain, nonatomic) NSArray<AWEPaySKMPromotionInfo> *promotions;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *errCode;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
