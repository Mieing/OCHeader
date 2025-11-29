@class UIButton, RichTextView, UIView;
@protocol WCFinderCommonTitleDescActionSheetDelegate;

@interface WCFinderCommonTitleDescActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) RichTextView *descTextView;
@property (weak, nonatomic) id<WCFinderCommonTitleDescActionSheetDelegate> businessDelegate;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)onClickCloseBtn;
- (id)getTitleDescActionSheetConfig;
- (void).cxx_destruct;

@end
