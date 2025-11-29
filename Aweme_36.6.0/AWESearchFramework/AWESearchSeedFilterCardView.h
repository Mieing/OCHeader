@class NSString, AWESearchSeedFilterModel, AWESearchCachalotResultContext, AWESearchSeedContentView;
@protocol AWESearchSeedFilterCardViewDelegate;

@interface AWESearchSeedFilterCardView : AWESearchCachalotBaseCardView <AWESearchSeedContentViewDelegate>

@property (retain, nonatomic) AWESearchSeedContentView *contentView;
@property (retain, nonatomic) AWESearchSeedFilterModel *filterModel;
@property (retain, nonatomic) AWESearchCachalotResultContext *context;
@property (weak, nonatomic) id<AWESearchSeedFilterCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)configUI;
- (id)unselectedLabelFont;
- (id)selectedLabelFont;
- (void)updateWithFilterCardModel:(id)a0;
- (void)selectedIndexPath:(id)a0;
- (unsigned long long)preferSearchTheme;
- (void)doubleSectionViewItemClick:(id)a0 selectedIndex:(id)a1 lastSelected:(id)a2;
- (id)congfigPosition;
- (id)congfigContent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
