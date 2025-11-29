@class NSString, IESECPDPContainerSlideViewSpeakingView, IESECTracker, IESECPDPSlideFoldView, IESECTrackContext, IESECPDPContainerSlideViewDataSource, IESECPDPSlideNetworkHelper, UICollectionView, UILabel;
@protocol IESECPDPSlideFoldViewDelegate, IESECPDPContainerSlideViewDelegate;

@interface IESECPDPContainerSlideView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *headerLabel;
@property (copy, nonatomic) NSString *popCardProductID;
@property (retain, nonatomic) IESECPDPContainerSlideViewSpeakingView *speakingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECPDPSlideFoldView *foldView;
@property (retain, nonatomic) IESECPDPContainerSlideViewDataSource *dataSource;
@property (weak, nonatomic) id<IESECPDPContainerSlideViewDelegate, IESECPDPSlideFoldViewDelegate> delegate;
@property (retain, nonatomic) IESECPDPSlideNetworkHelper *netHelper;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECTrackContext *trackerContext;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasShowSelf;
@property (nonatomic) BOOL hasFinishRequest;
@property (nonatomic) BOOL hasTrackShowSelf;
@property (nonatomic) BOOL touched;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContext:(id)a0;
- (void)resetSelectStatus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 request:(id)a2;
- (id)foldGesture;
- (id)tapFoldGesture;
- (void)hiddenFoldView:(BOOL)a0;
- (void)slideViewRefresh;
- (unsigned long long)foldProgressStatus;
- (void)trackModuleShow:(BOOL)a0 withModeChange:(BOOL)a1;
- (void)resetTracker:(id)a0;
- (void)showSlideView;
- (void)disableFoldView:(BOOL)a0;
- (void)resetPopCard;
- (void)changeSelectedGoods:(id)a0 isExplain:(BOOL)a1;
- (void)liveExplainGoodChange:(id)a0;
- (void)setPopCardProductID:(id)a0 promotionID:(id)a1;
- (void)resetSpeakingViewHighlight;
- (void)aimToSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateDataWhenClickGoodsCard:(id)a0;
- (BOOL)shouldShowSlideView;
- (void)clearInteractionStatus;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
