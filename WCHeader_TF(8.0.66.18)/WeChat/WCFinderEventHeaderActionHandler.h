@class NSString, UIViewController;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderEventHeaderActionHandler : NSObject <WCFinderEventDescriptionViewControllerDelegate, WCFinderEventHeaderViewDelegate>

@property (weak, nonatomic) UIViewController<WCFinderFeedBaseViewControllerProtocol> *presentingVC;
@property (nonatomic) int commentScene;
@property (nonatomic) int refCommentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithPresentingVC:(id)a0 commentScene:(int)a1 refCommentScene:(int)a2;

- (void)onEventHeaderClickAuthorInfoAction:(id)a0;
- (void)onEventHeaderClickDescriptionDetailAction:(id)a0;
- (void)showDescriptionJumpInfoSheet:(id)a0;
- (void)showDescriptionViewSheet:(id)a0;
- (void)onEventHeaderClickDescriptionContactAction:(id)a0;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)a0;
- (void)finderEventDescriptionViewController:(id)a0 didClickUrl:(id)a1;
- (void).cxx_destruct;

@end
