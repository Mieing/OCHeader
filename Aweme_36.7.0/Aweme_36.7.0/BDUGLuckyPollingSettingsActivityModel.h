@class NSString, NSDictionary;

@interface BDUGLuckyPollingSettingsActivityModel : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) long long cycleId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long popupStartTime;
@property (nonatomic) long long popupEndTime;
@property (nonatomic) long long forcePopup;
@property (nonatomic) long long blockActivity;
@property (copy, nonatomic) NSString *f2LynxSchema;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
