@class UIView, NSString, WCFinderHeadImageView, UIImageView, UIButton, WCFinderPersonalCenterViewModel, UILabel, RequestContactReq;

@interface NewLifeCheckContactValidPageSheet : MMPageSheetBaseView <WCFinderCreateUserViewControllerDelegate>

@property (retain, nonatomic) WCFinderPersonalCenterViewModel *viewModel;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) RequestContactReq *req;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIImageView *addImageView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)initData;
- (void)initSubviews;
- (void)updateLayout;
- (double)contentHeight;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetWillAppear;
- (void)onDone;
- (void)onCancel;
- (void)onJumpCreateFinderContact;
- (void)createUserFinished:(id)a0;
- (void).cxx_destruct;

@end
