@protocol WCPayOfflineAddNewCardTipsViewDelegate;

@interface WCPayOfflinePayAddNewCardTipsView : MMUIView

@property (weak, nonatomic) id<WCPayOfflineAddNewCardTipsViewDelegate> delegate;

- (id)initAddNewCardTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)setupContentView;
- (void)addNewCardBtnPress;
- (void)viewPayCardBtnPress;
- (void).cxx_destruct;

@end
