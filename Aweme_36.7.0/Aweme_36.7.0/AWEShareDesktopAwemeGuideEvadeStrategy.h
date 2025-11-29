@class NSString;

@interface AWEShareDesktopAwemeGuideEvadeStrategy : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (id)sceneType;

@end
