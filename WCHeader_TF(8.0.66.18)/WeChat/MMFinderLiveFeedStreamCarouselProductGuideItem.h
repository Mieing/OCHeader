@class FinderWindowProductInfo, FeedsPreviewLiveMultiStyleInfo_StyleOne, NSString;

@interface MMFinderLiveFeedStreamCarouselProductGuideItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>

@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleOne *productGuideStyleConf;
@property (nonatomic) BOOL showRecommendTag;
@property (retain, nonatomic) NSString *recommendTag;
@property (nonatomic) unsigned long long tagType;
@property (readonly, nonatomic) unsigned long long cellType;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
