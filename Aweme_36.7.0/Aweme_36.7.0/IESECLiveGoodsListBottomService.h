@class IESECLiveGoodsListCollectionService, IESECLiveGoodsListItemViewModel;

@interface IESECLiveGoodsListBottomService : IESECLiveGoodsListBaseServiceV2

@property (nonatomic) BOOL shouldShowBottomGuideView;
@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *lastClickItem;
@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *guideItem;
@property (weak, nonatomic) IESECLiveGoodsListCollectionService *collectionService;

- (long long)tabType;
- (id)tabModels;
- (void)didUpdateFirstPageInfo;
- (void)bottomLabelShowedTrack;
- (void)bottomGuideViewShowedTrack:(id)a0;
- (void)updateLastClickItem:(id)a0;
- (void)handleBottomLabelShowedWithIsSwipe:(BOOL)a0 showTrackInfoArray:(id)a1;
- (double)bottomGuideHeight;
- (void).cxx_destruct;
- (id)bottomText;
- (long long)selectedTabIndex;

@end
