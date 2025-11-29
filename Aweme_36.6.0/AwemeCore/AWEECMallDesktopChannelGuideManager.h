@class NSString;

@interface AWEECMallDesktopChannelGuideManager : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)registerUGDesktopChannelGuideScene;
- (void)showMallHomePageDesktopChannelGuide;
- (void).cxx_destruct;
- (id)position;
- (id)init;
- (id)tabID;

@end
