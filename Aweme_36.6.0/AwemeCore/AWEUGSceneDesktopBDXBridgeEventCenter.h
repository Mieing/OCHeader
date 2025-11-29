@class BDXBridgeEventSubscriber, NSString;

@interface AWEUGSceneDesktopBDXBridgeEventCenter : NSObject <AWEUGDesktopChannelGuideMessage>

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)registerUGDesktopBDXEventCenter;
- (void).cxx_destruct;
- (void)dealloc;

@end
