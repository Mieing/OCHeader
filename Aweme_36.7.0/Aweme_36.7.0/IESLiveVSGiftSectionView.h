@class NSMutableDictionary, UIView, NSMutableArray, IESLiveVSGiftPanelViewModel;
@protocol IESLiveVSGiftSectionCell;

@interface IESLiveVSGiftSectionView : UIView

@property (retain, nonatomic) IESLiveVSGiftPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSMutableDictionary *cellMap;
@property (retain, nonatomic) UIView<IESLiveVSGiftSectionCell> *lastCell;
@property (nonatomic) double currentLineWidth;

- (void)bindViewModel;
- (void)p_reloadViewIfNeeded;
- (void)p_dismissCells:(id)a0;
- (void)p_displayCells:(id)a0;
- (void)p_appendCell:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
