@class NSString;

@interface AWECollectWidgetGuideManager : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)registerDesktopChannelGuideStrategy;
- (void)canShowDesktopChannelGuideEnterFrom:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)sceneType;

@end
