@class NSString, IESLLifeURLModel;

@interface IESLLCouponModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long couponID;
@property (nonatomic) long long activityID;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *condition;
@property (copy, nonatomic) NSString *codeID;
@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) IESLLifeURLModel *logoImageURL;
@property (retain, nonatomic) IESLLifeURLModel *headerImageURL;
@property (copy, nonatomic) NSString *validStart;
@property (copy, nonatomic) NSString *validEnd;
@property (copy, nonatomic) NSString *validText;
@property (nonatomic) unsigned long long couponStatus;
@property (nonatomic) BOOL isDefaultHeadImage;
@property (nonatomic) unsigned long long couponType;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *reminder;
@property (copy, nonatomic) NSString *validityPeriodText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoImageURLJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)sourceString;

@end
