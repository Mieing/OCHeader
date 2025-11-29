@class NSString;

@interface AWEUGPushGuideIncentiveModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *negativeBtnText;
@property (copy, nonatomic) NSString *positiveBtnText;
@property (copy, nonatomic) NSString *incentiveTaskToken;
@property (nonatomic) long long incentiveTaskExpireTime;
@property (copy, nonatomic) NSString *incentiveTaskID;
@property (copy, nonatomic) NSString *incentiveActivityID;
@property (copy, nonatomic) NSString *incentiveBackground;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *incentiveTitleIcon;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
