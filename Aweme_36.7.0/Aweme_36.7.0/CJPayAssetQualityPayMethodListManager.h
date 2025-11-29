@class CJPayDefaultChannelShowConfig, NSString, NSArray, CJPayBDCreateOrderResponse, NSMutableDictionary, CJPayAssetQualityPayMethodListViewController, CJPayAssetInfoModel, CJPayQueryPayTypeResponse;
@protocol CJPayAssetQualityListManagerDelegate;

@interface CJPayAssetQualityPayMethodListManager : NSObject

@property (nonatomic) BOOL hasFetchPayMethodList;
@property (retain, nonatomic) CJPayAssetInfoModel *assetInfo;
@property (retain, nonatomic) CJPayQueryPayTypeResponse *queryPayTypeResponse;
@property (copy, nonatomic) NSArray *payMethodSortList;
@property (retain, nonatomic) NSMutableDictionary *methodGroupModels;
@property (nonatomic) long long displayGroupCount;
@property (copy, nonatomic) NSString *groupFoldDesc;
@property (copy, nonatomic) NSArray *allChannelConfigs;
@property (copy, nonatomic) NSArray *recChannelConfigs;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *curSelectConfig;
@property (retain, nonatomic) CJPayAssetQualityPayMethodListViewController *methodListVC;
@property (retain, nonatomic) NSMutableDictionary *extraRequestParams;
@property (weak, nonatomic) id<CJPayAssetQualityListManagerDelegate> delegate;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (nonatomic) BOOL isForceUpdateData;
@property (nonatomic) double payMethodViewHeight;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *outDefaultConfig;
@property (nonatomic) long long scene;

- (void)p_stopLoading;
- (id)p_filterAndSortMethodList:(id)a0 subPayTypeIndexList:(id)a1;
- (void)p_didSelectPayMethod:(id)a0 loadingView:(id)a1;
- (void)setExtraRequestPreTradeParams:(id)a0;
- (id)getListManagerCurSelectConfig;
- (void)getMethodGroupsWithConditionParams:(id)a0 completion:(id /* block */)a1;
- (id)getAllPayMethodShowConfigs;
- (BOOL)isAssetUnderSameParentWithAsset:(id)a0 withAnotherAsset:(id)a1;
- (id)getDefaultToCombineInfoByAsset:(id)a0;
- (id)initWithOrderResponse:(id)a0;
- (void)updateAssetInfoModel:(id)a0;
- (BOOL)p_isShowCombineSingleStyle;
- (void)gotoAssetListPageWithSelectConfig:(id)a0;
- (void)createPayTypeResponse;
- (BOOL)p_handlePayMethodListByAssetInfo:(id)a0;
- (void)p_setSelectedPayMethod:(id)a0;
- (id)p_createChoosePayMethodVC;
- (void)p_tryPushChoosePayMethodVC:(id)a0;
- (id)p_getCombineDetailGroupModel;
- (id)p_getGroupModelsWithConfigFilterList:(id)a0;
- (id)p_getGroupModelsWithFilterGroupInfoList:(id)a0;
- (id)p_getAllMethodGroupListWithParams:(id)a0;
- (BOOL)p_isEqualCurAsset:(id)a0 otherAsset:(id)a1;
- (id)p_payMethodGroupTypeStrWithShowConfig:(id)a0;
- (void)p_updateMethodSortOrderBySelectedConfig:(id)a0;
- (BOOL)p_needShowGroupModelWithType:(long long)a0 isCombineMode:(BOOL)a1;
- (void)p_injectCommonTrackParams;
- (BOOL)p_isAssetExpandVoucher:(id)a0;
- (void)p_startLoadingWithType:(id)a0;
- (id)p_updateAssetCombineAssetInfoWithShowConfig:(id)a0;
- (BOOL)p_assetCanSelectAsDefault:(id)a0;
- (void)p_modifyMethodSortBetweenGroup:(id)a0;
- (void)p_modifyMethodSortInsideGroup:(id)a0;
- (id)p_sortShowConfig:(id)a0 inList:(id)a1;
- (id)searchSuperAssetInfoByConfig:(id)a0;
- (void)gotoAssetListPageWithSelectConfig:(id)a0 isCombineMode:(BOOL)a1;
- (void)p_requestMethodListNeedLoading:(id)a0 completion:(id /* block */)a1;
- (void)p_setLocalDisableConfig:(id)a0;
- (id)p_cardListParams;
- (id)p_buildPreTradeParams;
- (id)getGroupFoldDetail;
- (id)searchGroupModelWithShowConfig:(id)a0;
- (void).cxx_destruct;

@end
