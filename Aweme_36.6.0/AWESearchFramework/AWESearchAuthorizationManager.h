@interface AWESearchAuthorizationManager : NSObject

@property (nonatomic) long long locationAccessStatus;
@property (nonatomic) long long addressBookAccessStatus;

+ (id)sharedInstance;

- (id)authorizationStatusParams;
- (void)loadAuthorizationStatus;

@end
