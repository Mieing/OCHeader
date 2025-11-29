@class UIButton, NSString, NSArray, UIView, UILabel, NSMutableArray;
@protocol WAAppConfirmWindowDelegate;

@interface WAAppConfirmWindow : UIView {
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    UILabel *_contentLabel;
    NSMutableArray *_itemLabels;
    UIButton *_link;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *authItems;
@property (retain, nonatomic) NSString *linkTitle;
@property (weak, nonatomic) id<WAAppConfirmWindowDelegate> confirmWindowDelegate;

+ (id)setupWindow:(id)a0 title:(id)a1 content:(id)a2 authGroupList:(id)a3 link:(id)a4;

- (void)closeWindow;
- (void)initView;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (id)titleText;
- (void)onClickButtonConfirm:(id)a0;
- (void)onClickButtonCancel:(id)a0;
- (void)onLinkClicked:(id)a0;
- (void).cxx_destruct;

@end
