@class NSString, NSDictionary;

@interface AWEPayQueryRewardInfoResponse : CJPayBaseResponse

@property (nonatomic) long long headerCode;
@property (nonatomic) BOOL hasAds;
@property (nonatomic) long long rit;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *extraParam;
@property (copy, nonatomic) NSDictionary *closeButtonModal;
@property (copy, nonatomic) NSDictionary *retentionModal;
@property (copy, nonatomic) NSDictionary *oneMoreModal;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)toCacheModel;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
