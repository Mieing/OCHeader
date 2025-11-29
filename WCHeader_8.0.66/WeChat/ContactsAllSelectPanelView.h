@class MMBottomBarButton;
@protocol ContactsAllSelectPanelViewDelegate;

@interface ContactsAllSelectPanelView : WCBottomBar

@property (weak, nonatomic) id<ContactsAllSelectPanelViewDelegate> m_delegate;
@property (retain, nonatomic) MMBottomBarButton *selectAllButton;
@property (nonatomic) BOOL isSelectAll;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)initViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePanelView:(BOOL)a0;
- (id)getSelectAllButtonTitle:(BOOL)a0;
- (void).cxx_destruct;

@end
