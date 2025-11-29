@class AFDViewedUserListPanelTrafficTipsEditorView, UILabel, UIView, UIButton;

@interface AFDViewedUserListPanelTrafficTipsHeaderView : UIView

@property (nonatomic) unsigned long long coldStartPlayCount;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *fireworksLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AFDViewedUserListPanelTrafficTipsEditorView *editorBtn;
@property (copy, nonatomic) id /* block */ closeBtnClickedActionBlock;
@property (copy, nonatomic) id /* block */ editorBtnClickedActionBlock;

- (id)tipsWithColdStartPlayCount:(unsigned long long)a0;
- (void)p_closeBtnClicked;
- (void)p_editorBtnClicked;
- (id)initWithColdStartPlayCount:(unsigned long long)a0 headerViewStyle:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
