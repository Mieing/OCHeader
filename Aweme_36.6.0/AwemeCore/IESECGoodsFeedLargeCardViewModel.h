@class IESECRecommendReasonModel, IESECFeedLiveRecommendModel, IESECGoodsDetailParameters, IESECGoodsCommentViewModel, NSDictionary, IESECVideoRecommendModel, IESECRelationFeedCommentInfo, NSMutableArray, NSString, IESECGoodsFeedRankingCardModel, NSArray, IESECFeedResourceCardModel, IESECHeadVideoModel, IESECRecommendCommonProductModel;

@interface IESECGoodsFeedLargeCardViewModel : NSObject <IGListDiffable, IESECGoodsFeedCellBaseViewModelProtocol> {
    NSArray *_tagModels;
}

@property (nonatomic) long long cardType;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (nonatomic) long long carouselIndex;
@property (retain, nonatomic) NSMutableArray *sectionsInfo;
@property (nonatomic) long long entryLocation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;
@property (retain, nonatomic) IESECFeedLiveRecommendModel *liveModel;
@property (retain, nonatomic) IESECVideoRecommendModel *videoModel;
@property (retain, nonatomic) IESECGoodsFeedRankingCardModel *rankingModel;
@property (retain, nonatomic) IESECFeedResourceCardModel *resourceCardModel;
@property (retain, nonatomic) IESECHeadVideoModel *headVideo;
@property (retain, nonatomic) IESECRecommendCommonProductModel *productModel;
@property (readonly, nonatomic) NSArray *tagModels;
@property (retain, nonatomic) NSArray *bulletTags;
@property (nonatomic) BOOL danmakuState;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL hideShopButton;
@property (nonatomic) BOOL isShowActivityImage;
@property (nonatomic) BOOL isManualSlided;
@property (nonatomic) BOOL shouldStartAutoSlide;
@property (copy, nonatomic) NSString *exposedMessage;
@property (copy, nonatomic) NSString *indemnificationMessage;
@property (copy, nonatomic) NSString *indemnificationMessageOnRight;
@property (nonatomic) BOOL isFirstCard;
@property (nonatomic) double messageDisplayAlpha;
@property (nonatomic) double recommendTagViewAlpha;
@property (nonatomic) BOOL indemnificationOnRight;
@property (nonatomic) BOOL hasShownCommentCount;
@property (retain, nonatomic) IESECRelationFeedCommentInfo *commentInfo;
@property (copy, nonatomic) NSDictionary *storeTrackInfo;
@property (retain, nonatomic) IESECGoodsCommentViewModel *goodsCommentViewModel;
@property (nonatomic) BOOL tagViewDisplayed;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL shouldShowSameGoodEntrance;
@property (nonatomic) double tagImageHeight;
@property (nonatomic) BOOL showSkeleton;
@property (copy, nonatomic) NSString *discountContent;
@property (retain, nonatomic) IESECRecommendReasonModel *recReason;
@property (nonatomic) BOOL hasLayoutImage;
@property (nonatomic) long long searchSameGoodsShow;
@property (nonatomic) long long searchSameGoodsShowPosition;
@property (nonatomic) long long searchResourceCardStyle;
@property (nonatomic) long long searchCardFrequency;
@property (nonatomic) long long windowEntryPriority;
@property (copy, nonatomic) id /* block */ bstBindAction;
@property (copy, nonatomic) NSDictionary *compareDealsBarCommonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)commonSceneTag;
- (BOOL)showRecReason;
- (BOOL)isAvaliable;
- (void).cxx_destruct;

@end
