@class NSString, NSMutableArray;

@interface UgCouponTaskInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *couponsArray;
@property (readonly, nonatomic) unsigned long long couponsArray_Count;
@property (nonatomic) long long benefitType;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) int tokenType;
@property (copy, nonatomic) NSString *token;

+ (id)descriptor;

@end
