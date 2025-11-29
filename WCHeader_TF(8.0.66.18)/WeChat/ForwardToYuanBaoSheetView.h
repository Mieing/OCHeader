@class RichTextView, ForwardToYuanBaoSheetViewDelegate, NSArray, NSString, UILabel, UIView, UIButton;

@interface ForwardToYuanBaoSheetView : MMAutoLayoutSheetView <ILinkEventExt, MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UILabel *sheetViewTitle;
@property (retain, nonatomic) UILabel *sheetViewSubTitle;
@property (retain, nonatomic) UIView *appView;
@property (retain, nonatomic) UIView *msgView;
@property (retain, nonatomic) UILabel *totalMsgCountLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) RichTextView *tipsBeforeConfirm;
@property (nonatomic) BOOL hadClickConfirm;
@property (nonatomic) int scene;
@property (weak, nonatomic) ForwardToYuanBaoSheetViewDelegate *delegate;
@property (retain, nonatomic) NSArray *selectMsg;
@property (retain, nonatomic) NSArray *objects;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithScene:(int)a0;
- (void)initConfigs;
- (void)initView;
- (void)initTitleView;
- (void)initAppView;
- (void)initSubTitle;
- (void)initMsgView;
- (void)layoutMsgView;
- (void)layoutSubviews;
- (void)onClickDetailButton:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
