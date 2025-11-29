@class NSString, NSDictionary;

@interface CJPayDyPaySignConfirmNextActionModel : JSONModel

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSDictionary *jumpInfo;
@property (copy, nonatomic) NSString *queryTimes;
@property (copy, nonatomic) NSString *queryInterval;
@property (copy, nonatomic) NSString *loadPrompt;
@property (copy, nonatomic) NSString *appleInAppPinningId;
@property (nonatomic) BOOL disableAppleJumpSign;
@property (copy, nonatomic) NSString *iabFailedMsg;
@property (copy, nonatomic) NSDictionary *iabFailedErrConfigMap;
@property (readonly, nonatomic) long long queryTimesValue;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
