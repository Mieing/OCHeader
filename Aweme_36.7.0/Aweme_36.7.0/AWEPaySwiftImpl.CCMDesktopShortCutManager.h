@interface AWEPaySwiftImpl.CCMDesktopShortCutManager : NSObject <AWEUGDesktopChannelGuideMessage>

- (void)showDesktopChannelGuide:(id)a0 config:(id)a1 guideType:(id)a2;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
