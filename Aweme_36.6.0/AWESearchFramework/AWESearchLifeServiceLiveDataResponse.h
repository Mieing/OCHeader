@class NSString, NSArray, AWESearchAISummaryEntryConfigModel, AWESearchGroupBuyDynamicContainerConfig, AWESearchResultLifeServiceGlobalInfoModel, AWESearchPOIFilterCardModel, NSMutableArray;

@interface AWESearchLifeServiceLiveDataResponse : AWESearchLiveCachalotDataResponse <AWESearchResultLifeServiceBaseDataResponseProtocol>

@property (retain, nonatomic) AWESearchAISummaryEntryConfigModel *aiSummaryEntryConfig;
@property (retain, nonatomic) AWESearchGroupBuyDynamicContainerConfig *bottomViewData;
@property (retain, nonatomic) AWESearchResultLifeServiceGlobalInfoModel *lifeServiceGlobalInfo;
@property (retain, nonatomic) AWESearchPOIFilterCardModel *patchModel;
@property (retain, nonatomic) NSArray *commonPatchModel;
@property (retain, nonatomic) NSMutableArray *patchData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
