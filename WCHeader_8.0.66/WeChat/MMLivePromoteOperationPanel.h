@class UITapGestureRecognizer, NSString, UIView, MMUIButton, NSMutableArray;
@protocol MMLivePromoteOperationPanelDelegate;

@interface MMLivePromoteOperationPanel : MMPageSheetBaseView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) NSMutableArray *panelCells;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<MMLivePromoteOperationPanelDelegate> delegate;
@property (nonatomic) double contentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupPageSheetConfig;
- (void)createUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addPanelCell:(id)a0;
- (void)showPanel;
- (void)hidePanel;
- (void)forceLayout;
- (void)handleCellDidClick:(id)a0;
- (void)handleTapGestureRecognizer:(id)a0;
- (void)handleTapArrowButton;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
