@class NSString;

@interface AWETeenProtectionHomeBaseViewController : UIViewController

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *UIID;
@property (retain, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *enterFrom;

- (void)p_didClickTurnOnToolButtonTrackLog;
- (void)p_changeTeenModeEnabledWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
