@class MainFrameItemView, MainFrameCellData, NSString;

@interface MainFrameAggregationCell : NewMainFrameCell <IMainFrameCellExt>

@property (retain, nonatomic) MainFrameItemView *itemView;
@property (retain, nonatomic) MainFrameCellData *cellData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)menuAnimateDuration;
- (id)menuAnimateTimingFunction;
- (void)updateCellData:(id)a0 tableViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateMoreMenu:(id)a0;
- (void)setArrMenuItems:(id)a0;
- (void).cxx_destruct;

@end
