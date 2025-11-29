@class NSString;

@interface AWEConcernRecommendUserCardHelper : NSObject <AWEConcernRecommendUserCardHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)insertRecommendCardIfNeedWithResponse:(id)a0 currentDataSource:(id)a1;
+ (void)addFollowFeedRecommendCardParams:(id)a0 logExtraDict:(id)a1 referString:(id)a2;
+ (BOOL)alreadyLoginEnableShowFollowFeedRecommendCard;
+ (BOOL)alreadyLoginEnableEmptyShowFollowFeedRecommendCard;
+ (BOOL)shouldUseBigCardStyle;
+ (struct CGSize { double x0; double x1; })IPad_BigStyleSize;
+ (struct CGSize { double x0; double x1; })IPad_SmallStyleSizeForMultiCard;
+ (struct CGSize { double x0; double x1; })IPad_SmallStyleSizeForSingleCard;
+ (id)createCellViewController;
+ (long long)alreadyLoginRecommendRequestCount;
+ (long long)alreadyLoginRecommendMaxCount;
+ (id)findAwemeToDisplayForAuthor:(id)a0;
+ (struct CGSize { double x0; double x1; })dragContainerSizeForSingleCard;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForMultiCardPortraitWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForMultiCardLandscapeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForSingleCardPortraitWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForSingleCardLandscapeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)trackFollowFromRecUserForConcernIfNeed:(id)a0 trackParam:(id)a1;
+ (id)recommendCardParamDict;
+ (void)enterAwemeDetailTableViewControllerWithModel:(id)a0 extraParam:(id)a1;
+ (void)enterPersonalHomepageWithUser:(id)a0 enterFrom:(id)a1 extraParam:(id)a2;


@end
