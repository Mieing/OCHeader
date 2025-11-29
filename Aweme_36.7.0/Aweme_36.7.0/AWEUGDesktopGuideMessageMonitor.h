@class NSString;

@interface AWEUGDesktopGuideMessageMonitor : NSObject <AWEUGDesktopChannelGuideMessage, HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)desktopChannelGuidePIPWindowAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideModel:(id)a2;
- (void)desktopChannelGuideShortcutOpenUrlJumpOutsideWithScene:(id)a0 enterFrom:(id)a1 guideModel:(id)a2;

@end
