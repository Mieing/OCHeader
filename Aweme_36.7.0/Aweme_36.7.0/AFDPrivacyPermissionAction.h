@class NSString, NSDictionary;

@interface AFDPrivacyPermissionAction : NSObject

@property (copy, nonatomic) NSString *createId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) long long beforePrivacyPermissionType;
@property (nonatomic) long long privacyPermissionType;
@property (copy, nonatomic) NSDictionary *downgradeInfo;
@property (nonatomic) unsigned long long actionAwemeType;
@property (nonatomic) BOOL fromStoryModel;

- (void).cxx_destruct;

@end
