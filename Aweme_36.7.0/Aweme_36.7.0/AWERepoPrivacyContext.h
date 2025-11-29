@class NSString, NSArray;

@interface AWERepoPrivacyContext : NSObject

@property (nonatomic) long long privacyPermissionType;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSArray *userIDs;
@property (copy, nonatomic) NSString *createId;
@property (nonatomic) BOOL isStoryPublish;

- (void).cxx_destruct;

@end
