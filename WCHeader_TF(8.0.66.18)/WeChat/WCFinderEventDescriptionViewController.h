@class UIView, MMUIButton, MMUILabel, NSString, FinderEventInfo, WCFinderAuthInfoIconView, RichTextView, WCFinderHeadImageView, UILabel, UIScrollView;
@protocol WCFinderEventDescriptionViewControllerDelegate;

@interface WCFinderEventDescriptionViewController : MMUIHalfScreenViewController <ILinkEventExt, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) MMUIButton *exitBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *descContainer;
@property (retain, nonatomic) UIView *contactView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *authInfoLabel;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) RichTextView *statementView;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (retain, nonatomic) id<WCFinderEventDescriptionViewControllerDelegate> descriptionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)updateWithEventInfo:(id)a0;
- (double)heightWithEventInfo:(id)a0;
- (void)onExitBtnClicked;
- (void)onClickAuthorInfoAction;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
