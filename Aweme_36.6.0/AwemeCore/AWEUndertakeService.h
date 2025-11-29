@class AWEDiversionNewUserTask;

@interface AWEUndertakeService : NSObject

@property (retain, nonatomic) AWEDiversionNewUserTask *diversionNewUser;

+ (id)sharedInstance;

- (void)updateFCollectInfo:(id)a0 notLoginConfig:(id)a1 version:(long long)a2;
- (void)requestActivitySettingsInfo;
- (void)reportAckInstall;
- (void).cxx_destruct;
- (id)init;

@end
