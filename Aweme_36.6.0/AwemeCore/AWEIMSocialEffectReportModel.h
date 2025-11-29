@class NSString;

@interface AWEIMSocialEffectReportModel : NSObject <NSCopying>

@property (nonatomic) long long duetType;
@property (nonatomic) long long duetLayout;
@property (nonatomic) long long duetRole;
@property (nonatomic) double duetDuration;
@property (nonatomic) BOOL isIMSocialEffect;
@property (copy, nonatomic) NSString *effectCategory;
@property (copy, nonatomic) NSString *effectExtraInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
