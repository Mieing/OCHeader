@class CommonBtnBasicInfoStructV2;

@interface CommonBtnInfoStructV2 : GPBMessage

@property (retain, nonatomic) CommonBtnBasicInfoStructV2 *basicInfo;
@property (nonatomic) BOOL hasBasicInfo;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL hasPriority;

+ (id)descriptor;

@end
