@class NSString, AWEPOIGoodsDetailShareCouponBubbleModel, AWEPOIGoodsDetailNavigationBarUIModel, NSDictionary, AWEPOIGoodsDetailCollectObject, AWEPOIGoodsDetailMarketingShareInfoModel, AWEPOIGoodsDetailShareCouponTagModel, NSNumber;

@interface AWEPOIGoodsDetailNavigationBarNewViewModel : DitoComponentViewModel

@property (retain, nonatomic) AWEPOIGoodsDetailCollectObject *collectObj;
@property (copy, nonatomic) NSString *collectPopUrl;
@property (copy, nonatomic) NSDictionary *diamondEduSchema;
@property (nonatomic) BOOL hasGrouponTab;
@property (nonatomic) BOOL hasDiamondEntry;
@property (nonatomic) BOOL adjustHeight;
@property (nonatomic) BOOL hasItemData;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL needShowCollectView;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL didCollectActionSucceed;
@property (copy, nonatomic) NSString *collectBubbleText;
@property (copy, nonatomic) NSString *collectBubbleLinkText;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareImageUrl;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *shareDesc;
@property (copy, nonatomic) NSString *qrcodeShareInfo;
@property (copy, nonatomic) NSString *commandShareParams;
@property (copy, nonatomic) NSString *innerUrl;
@property (copy, nonatomic) NSString *reportUrl;
@property (retain, nonatomic) AWEPOIGoodsDetailNavigationBarUIModel *startState;
@property (retain, nonatomic) AWEPOIGoodsDetailNavigationBarUIModel *endState;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (retain) NSNumber *contentYOffset;
@property (copy, nonatomic) NSDictionary *lifeShareExt;
@property (copy, nonatomic) NSDictionary *searchTrackParams;
@property (nonatomic) BOOL isShowShareBtn;
@property (nonatomic) BOOL isShowSearchBtn;
@property (retain, nonatomic) NSString *searchEntryStyle;
@property (nonatomic) BOOL showSearchBtnInX;
@property (copy, nonatomic) NSString *searchSchemaPrefix;
@property (nonatomic) BOOL isShowElevator;
@property (nonatomic) BOOL forceBottomElevator;
@property (nonatomic) BOOL needShowDynamicView;
@property (nonatomic) double dynamicViewHeight;
@property (copy, nonatomic) NSDictionary *multiSkuInfo;
@property (nonatomic) BOOL tabMode;
@property (copy, nonatomic) NSString *multiSkuTabUrl;
@property (retain, nonatomic) NSNumber *customComponentHeight;
@property (retain, nonatomic) AWEPOIGoodsDetailMarketingShareInfoModel *marketingShareInfo;
@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponBubbleModel *shareBubbleInfo;
@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponTagModel *shareTagInfo;
@property (copy, nonatomic) NSDictionary *sharePanelRequestParams;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)didEndReload;
- (BOOL)shouldShowCollectEduPopup;
- (void)showCollectEduPopup;
- (void)onCollectIconTapped;
- (void)onCollectBubbleTapped;
- (void)onCollectBubbleDisplayed;
- (id)parseImExtraWith:(id)a0;
- (id)getFavoriteExtraInfoInSession;
- (BOOL)needShowElevator;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
