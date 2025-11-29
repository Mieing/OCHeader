@class NSString;

@interface AWELiveLeaveSceneDesktopEvadeManager : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)sharedInstance;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;

@end
