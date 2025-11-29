@class NSString, NSDictionary;

@interface AWEIMCreateFansGroupCommonModel : NSObject

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupDesc;
@property (nonatomic) long long showAtProfile;
@property (nonatomic) long long auditSwitch;
@property (nonatomic) long long liveAutoSync;
@property (nonatomic) long long itemAutoSync;
@property (copy, nonatomic) NSDictionary *groupEntryLimitDict;
@property (copy, nonatomic) NSDictionary *limitsTrackerDict;
@property (copy, nonatomic) NSString *createType;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL enterMessageListVC;
@property (nonatomic) BOOL needFloatMode;
@property (nonatomic) BOOL insertGroupGuidanceMsg;
@property (nonatomic) long long groupNumLeft;
@property (copy, nonatomic) NSString *imageSource;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (copy, nonatomic) NSDictionary *createExtra;
@property (copy, nonatomic) NSDictionary *clientExtra;

- (void).cxx_destruct;
- (id)init;

@end
