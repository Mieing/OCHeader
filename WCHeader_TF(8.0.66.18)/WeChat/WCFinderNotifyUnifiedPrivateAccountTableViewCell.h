@class UIButton, WCFinderRichTextView, NSString;

@interface WCFinderNotifyUnifiedPrivateAccountTableViewCell : WCFinderNotifyUnifiedTableViewCell <WCFinderNotifyCenterCellViewModelDelegate>

@property (weak, nonatomic) WCFinderRichTextView *contentTextView;
@property (weak, nonatomic) UIButton *confirmButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void)confirmButtonDidClick:(id)a0;
- (void)updateConfirmButton;
- (void)onPrivateAccountFollowStateChanged;
- (void).cxx_destruct;

@end
