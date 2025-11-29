@class WAWebActionSheetView, WAWebViewController, UIScrollView, UIButton, UIView, NSMutableArray, UILabel;
@protocol WAWebActionSheetDelegate;

@interface WAWebActionSheet : MMObject {
    UIScrollView *_containerView;
    NSMutableArray *_buttonArray;
    UIButton *_cancelButton;
}

@property (weak, nonatomic) WAWebViewController *vc;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSMutableArray *buttonArr;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long actionSheedId;
@property (weak, nonatomic) id<WAWebActionSheetDelegate> delegate;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) WAWebActionSheetView *backgroundView;

- (id)initWithWebView:(id)a0;
- (void)dealloc;
- (void)setItems:(id)a0 cancelText:(id)a1 alertText:(id)a2;
- (void)updateItems:(id)a0;
- (void)updateCancelText:(id)a0;
- (void)updateAlertText:(id)a0;
- (void)setItemColor:(id)a0 cancelColor:(id)a1;
- (void)tapOut:(id)a0;
- (void)onClickBtn:(id)a0;
- (void)dismissAndCancel;
- (void)dismiss;
- (void)beforeShow;
- (void)afterShow;
- (void)onCancel;
- (void)onSelected:(long long)a0;
- (void)setItemColor:(id)a0 atIndex:(long long)a1;
- (id)makeAlertTextViewWithText:(id)a0 backgroundWidth:(double)a1;
- (void).cxx_destruct;

@end
