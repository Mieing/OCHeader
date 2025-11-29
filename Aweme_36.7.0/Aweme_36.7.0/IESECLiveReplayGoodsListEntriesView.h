@class NSArray, NSMutableArray, UIStackView;
@protocol IESECLiveReplayGoodsListEntriesViewDelegate;

@interface IESECLiveReplayGoodsListEntriesView : UIView

@property (retain, nonatomic) UIStackView *entryViewsStackView;
@property (retain, nonatomic) NSMutableArray *entryViews;
@property (retain, nonatomic) NSArray *entryModels;
@property (weak, nonatomic) id<IESECLiveReplayGoodsListEntriesViewDelegate> delegate;
@property (nonatomic) double entriesViewWidth;

- (id)newEntryViewWithItemModel:(id)a0;
- (void)p_clickEntryView:(id)a0;
- (void)generateEntryButtons;
- (id)entryButtonForType:(long long)a0;
- (void)setEntriesViewInnerSpace:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
