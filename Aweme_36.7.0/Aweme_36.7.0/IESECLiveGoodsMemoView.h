@class UIFont, NSMutableDictionary, UIColor, UIImage, NSString, NSMutableArray, IESECLiveGoodsCarouselInfoModel;

@interface IESECLiveGoodsMemoView : IESECLiveCarouselAnimationView <IESECLiveCarouselAnimationViewDataSource>

@property (retain, nonatomic) NSMutableDictionary *containerPools;
@property (retain, nonatomic) NSMutableDictionary *labelPools;
@property (retain, nonatomic) NSMutableArray *builders;
@property (retain, nonatomic) IESECLiveGoodsCarouselInfoModel *carouselInfoModel;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIImage *splitImage;
@property (retain, nonatomic) NSString *splitImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemViewDidAppear:(BOOL)a0;
- (unsigned long long)numberOfItemsCountInAnimationView:(id)a0;
- (id)animationView:(id)a0 itemViewAtIndex:(unsigned long long)a1;
- (BOOL)useLineData;
- (id)buildBuilderWithContents:(id)a0 contentColor:(id)a1;
- (id)buildBuilderWithContents:(id)a0;
- (id)getLabelAtIndex:(unsigned long long)a0;
- (id)getContainerAtIndex:(unsigned long long)a0;
- (void)updateLineDataAtIndex:(unsigned long long)a0 container:(id)a1;
- (void)updateGoodsMemo:(id)a0;
- (void)updateLotteryGoodsMemo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
