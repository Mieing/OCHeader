@class UIStackView, IESECLiveContext, NSArray, NSMutableArray;
@protocol IESECLiveGoodsListEntriesViewDelegate;

@interface IESECLiveGoodsListEntriesView : UIView

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) UIStackView *entryViewsStackView;
@property (retain, nonatomic) NSMutableArray *entryViews;
@property (retain, nonatomic) NSArray *entryModels;
@property (weak, nonatomic) id<IESECLiveGoodsListEntriesViewDelegate> delegate;
@property (nonatomic) double entriesViewWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveContext:(id)a1;
- (id)newEntryViewWithItemModel:(id)a0;
- (void)p_clickEntryView:(id)a0;
- (id)lottieFilePathWithType:(unsigned long long)a0;
- (void)generateEntryButtons;
- (id)entryButtonForType:(unsigned long long)a0;
- (void)setEntriesViewInnerSpace:(double)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
