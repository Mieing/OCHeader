@class NSString;

@interface AFDFriendsTabDesktopChannelGuideManager : NSObject <AWEUGDesktopChannelGuideMessage, AWEUGSceneDesktopChannelGuideEvadeProtocol, AFDFriendsTabDesktopChannelGuideManagerProtocol>

@property (copy, nonatomic) NSString *sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)registerUGDesktopChannelGuideScene;
- (void).cxx_destruct;
- (id)position;
- (id)init;
- (id)tabID;

@end
