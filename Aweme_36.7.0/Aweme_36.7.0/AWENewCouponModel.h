@class NSString, AWEURLModel;

@interface AWENewCouponModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long couponID;
@property (copy, nonatomic) NSString *merchantName;
@property (nonatomic) long long merchantUserId;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *codeID;
@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) AWEURLModel *logoImageURL;
@property (retain, nonatomic) AWEURLModel *headerImageURL;
@property (nonatomic) long long receivedTime;
@property (copy, nonatomic) NSString *validStart;
@property (copy, nonatomic) NSString *validEnd;
@property (copy, nonatomic) NSString *validText;
@property (nonatomic) unsigned long long couponStatus;
@property (nonatomic) BOOL isDefaultHeadImage;
@property (nonatomic) unsigned long long couponType;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *reminder;
@property (nonatomic) BOOL willExpired;
@property (copy, nonatomic) NSString *couponDetailUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoImageURLJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)couponStatusEventString;
- (void).cxx_destruct;
- (id)sourceString;

@end
