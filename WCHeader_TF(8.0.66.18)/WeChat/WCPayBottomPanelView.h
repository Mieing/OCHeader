@class NSString, UIView;
@protocol WCPayBottomPanelViewDelegate;

@interface WCPayBottomPanelView : UIView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *btnTitle;
@property (retain, nonatomic) UIView *detailView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<WCPayBottomPanelViewDelegate> delegate;

- (id)initPanelViewWithTitle:(id)a0 detailView:(id)a1 confirmBtnTitle:(id)a2;
- (void)setupContentView;
- (void)handleTap;
- (void)confirmBtnClick;
- (void)showInView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
