@interface IESIMGroupImpl.GroupJoinInfoView : UIView <IESIMGroupJoinInputViewDelegate, IESIMGroupJoinEntryLimitCellDelegate, IESIMGroupJoinConfirmButtonDelegate, IESIMGroupJoinBaseInfoViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ moreButtonView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ baseInfoView;
    void /* unknown type, empty encoding */ entryLimitView;
    void /* unknown type, empty encoding */ inputTextView;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updatePanelWithKeyboardHeight:(double)a0 duration:(double)a1 options:(unsigned long long)a2;
- (void)inputTextViewVisibilityDidChange:(BOOL)a0;
- (void)resetPanelToOriginalState;
- (void)jumpWithSchema:(id)a0 schema:(id)a1 needDismiss:(BOOL)a2;
- (void)didTapCellJoinMemberBtn:(id)a0 schema:(id)a1;
- (void)didTapCellFollowBtn:(id)a0;
- (void)didTapConfirmButton:(id)a0;
- (void)didTapGroupOwnerInfo:(id)a0;
- (void)didTapMoreButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
