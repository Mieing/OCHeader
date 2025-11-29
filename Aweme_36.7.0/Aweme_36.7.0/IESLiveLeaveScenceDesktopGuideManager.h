@interface IESLiveLeaveScenceDesktopGuideManager : NSObject

@property BOOL shortCutPreload;
@property BOOL ecomShortCutPreload;

+ (id)sharedInstance;

- (void)showGuidePanelWithScene:(id)a0;
- (id)desktopGuideCommonParamsWithScene:(id)a0;
- (id)init;
- (void)preload;

@end
