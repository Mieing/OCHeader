@class NSString;

@interface AWEStudioCommerceServiceImpl : HTSService <AWEStudioCommerceServiceProtocol>

@property (retain, nonatomic) id anchorListRequest;
@property (nonatomic) long long anchorListDidUpdateSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openGoodsManageWithDraftID:(id)a0;
- (id)linkAdPublishData;
- (void)setLinkAdPublishData:(id)a0;
- (void)cleanLinkAdPublishData;
- (id)ironManID;
- (BOOL)canShowBindHotSpotEntrance;
- (BOOL)shouldShowAnchor;
- (id)anchorWithType:(long long)a0;
- (void)showAnchorPanelWithSource:(id)a0;
- (void)showAnchorContentPageWithController:(id)a0 source:(id)a1;
- (void)didClickAnchorWithType:(long long)a0;
- (id)publishAnchorArray;
- (void)endCurrentMissionPublishmentSession;
- (BOOL)hasMarketingToolsCheck;
- (id)accessLableText;
- (void)showSelectCompanyToolsWithTrackParams:(id)a0 clickFrom:(id)a1;
- (void)fetchEnterpriseComponentIfNeededWithCompletion:(id /* block */)a0;
- (void)addMarketingTool:(id)a0 completion:(id /* block */)a1;
- (BOOL)isBubbleToolShownBefore:(id)a0;
- (void)saveShownBubbleTools:(id)a0;
- (BOOL)forbidStarAtlasEntrance;
- (BOOL)hasAnyCommerceInfoInPublishModel:(id)a0;
- (void)showAnchorPanelWithSource:(id)a0 extraTracskParams:(id)a1;
- (void)showAnchorPanelWithSource:(id)a0 extraTracskParams:(id)a1 isShowServerAnchorList:(BOOL)a2;
- (void)prepareSpotDataWithZipURI:(id)a0;
- (void)updateRecordLiveMissionInfo:(id)a0 into:(id)a1;
- (void)updateShareID:(id)a0 into:(id)a1;
- (id)getMarketingTools;
- (void)showShoppingCarAlertViewWithChallengeModel:(id)a0;
- (void)showShoppingCarAnchorWithChallengeModel:(id)a0;
- (void)showOpenShareTipsWithCommerceHelper:(id)a0 containerView:(id)a1;
- (BOOL)isEnterOpenSharePublishLandedWithCommerceHelper:(id)a0;
- (id)ecomEditViewController:(id)a0;
- (BOOL)shouldOpenCommerceCameraWithPublishModel:(id)a0;
- (void)monitorNonStandardWithPublishModel:(id)a0 stage:(id)a1;
- (void)monitorNonStandardCreateAwemeWithParam:(id)a0;
- (void)starAtlasRemoveAnchorInfoWithPublishViewModel:(id)a0;
- (void)fetchPublishAnchorListWithItemType:(long long)a0 extraParams:(id)a1 isReedit:(BOOL)a2;
- (void)fetchRecommendPublishAnchorListWithUri:(id)a0 itemType:(long long)a1 extraParams:(id)a2;
- (void)clearRecommendPublishAnchorList;
- (void)checkPublishAnchorWithAnchorType:(long long)a0 requestExtraParams:(id)a1 itemType:(long long)a2 completion:(id /* block */)a3;
- (BOOL)isImageToVideoForAnchorInfo:(id)a0;
- (BOOL)isSingleImage:(id)a0;
- (void)showShoppingMissionTipsViewWithCommerceHelper:(id)a0;
- (id)publishAnchorRequestParamsWithItemType:(long long)a0;
- (id)publishAnchorRequestUrlString;
- (void)updateAnchorAllList:(id)a0 itemType:(long long)a1 isReedit:(BOOL)a2 requestID:(id)a3;
- (void)sendAnchorListDidUpdateSignal;
- (id)publishRecommendAnchorRequestParamsWithItemType:(long long)a0 zipUri:(id)a1;
- (long long)checkRequestTimeOut;
- (BOOL)isCommerceAnchorInfo:(id)a0;
- (BOOL)isLoraAIUGCScene:(id)a0;
- (BOOL)isGraphicsAnchor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
