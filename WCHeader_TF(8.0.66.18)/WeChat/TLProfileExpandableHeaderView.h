@class TLProfileNicknameContainerView, NSString, MMUIViewController, MMHeadImageView, TLProfileDragAnimateHelper, UIImageView, UIView, MMCPLabel, UITableView, TLProfileModel;

@interface TLProfileExpandableHeaderView : MMUIButton <TLProfileDetailContentViewDelegate, WCActionSheetDelegate> {
    struct shared_ptr<ExpandUIConfig> { struct ExpandUIConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _config;
}

@property (retain, nonatomic) NSString *cpKeyForNickname;
@property (retain, nonatomic) NSString *cpKeyForSignature;
@property (nonatomic) BOOL isNicknameUnsafe;
@property (nonatomic) BOOL isSignatureUnsafe;
@property (retain, nonatomic) UIImageView *bkgMaskView;
@property (retain, nonatomic) TLProfileNicknameContainerView *nicknameContainerView;
@property (retain, nonatomic) MMCPLabel *infoLabel;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) TLProfileDragAnimateHelper *animateHelper;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bkgRect;
@property (retain, nonatomic) TLProfileModel *profileModel;
@property (retain, nonatomic) MMCPLabel *signatureLabel;
@property (nonatomic) BOOL showSignature;
@property (retain, nonatomic) UIView *accessibilityView;
@property (nonatomic) BOOL isCoverNewVersion;
@property (nonatomic) BOOL isModeTall;
@property (copy, nonatomic) id /* block */ showConcatBlock;
@property (copy, nonatomic) id /* block */ onTouchUpInsideBlock;
@property (copy, nonatomic) id /* block */ navigationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithTableView:(id)a0 animator:(id)a1 viewController:(id)a2 config:(struct shared_ptr<ExpandUIConfig> { struct ExpandUIConfig *x0; struct __shared_weak_count *x1; })a3 bkgRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 profileModel:(id)a5 isModeTall:(BOOL)a6;
- (void)updateframe;
- (double)mediaViewBottomMargin;
- (double)mediaViewDrawDownBottomMargin;
- (void)setupUI;
- (void)showChangeBkgOption;
- (void)showContactInfo;
- (void)onTouchUpInside;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)loadAccessibilityView;
- (void)updateAccessibilityInfo;
- (void)updateAccessibilityElements;
- (void)updateProfileModel:(id)a0;
- (void)updateExpandableHeaderView;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
