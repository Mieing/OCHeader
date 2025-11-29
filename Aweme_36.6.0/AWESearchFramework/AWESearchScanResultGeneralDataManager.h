@class AWESearchScanResultBaseViewController, NSString, AWESearchResultCachalotDataResponse, UIImage, NSDictionary, CSPChunkRequestManager, AWESearchScanResponseModel, NSObject, AWESearchResultCachalotResponseParams;
@protocol TTJSONResponseSerializerProtocol;

@interface AWESearchScanResultGeneralDataManager : AWESearchCachalotDataController <CSPChunkRequestDelegate, CSPCommonResponseSerializer, AWESearchScanResultGeneralDataManagerProtocol>

@property (retain, nonatomic) AWESearchResultCachalotResponseParams *responseParams;
@property (retain, nonatomic) AWESearchResultCachalotDataResponse *dataResponse;
@property (retain, nonatomic) NSObject<TTJSONResponseSerializerProtocol> *jsonSerializerImp;
@property (retain, nonatomic) CSPChunkRequestManager *chunkManager;
@property (nonatomic) BOOL hasReceiveBoxData;
@property (nonatomic) BOOL hasReceiveOCRData;
@property (nonatomic) BOOL searchFromLoadMore;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *preSearchId;
@property (retain, nonatomic) AWESearchScanResponseModel *responseModel;
@property (copy, nonatomic) id /* block */ loadmoreCompletion;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *tosURL;
@property (nonatomic) BOOL isExecutingLoadMore;
@property (nonatomic) BOOL isExecutingRefresh;
@property (nonatomic) BOOL isFirstLoad;
@property (retain, nonatomic) NSString *curDetectionStr;
@property (weak, nonatomic) AWESearchScanResultBaseViewController *myViewController;
@property (copy, nonatomic) id /* block */ reloadBoxDataCompletionBlock;
@property (copy, nonatomic) id /* block */ reloadOCRDataCompletionBlock;
@property (copy, nonatomic) id /* block */ refreshScanImageDataCompletion;
@property (copy, nonatomic) id /* block */ loadMoreScanImageDataCompletion;
@property (nonatomic) BOOL isTabHidden;
@property (copy, nonatomic) id /* block */ getCurrentSuggestWordCompletion;
@property (copy, nonatomic) id /* block */ willBeginLoadmoreBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)didReceiveCommonResponse:(id)a0;
- (id)commonResponseWithTTResponse:(id)a0 fromJSONDictionary:(id)a1 error:(id *)a2;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;
- (BOOL)enableNewScanSmartPostFeature;
- (void)forceCancleRequest;
- (void)refreshScanImageData;
- (BOOL)loadMoreScanImageData:(id /* block */)a0;
- (id)convertSelectionDicToDetctionStr:(id)a0;
- (void)scanResultTuringVerify;
- (id)generateRespondDataWith:(id)a0;
- (void)requestInterruptWithParams:(id)a0 withURLPath:(id)a1;
- (void)appendCompressedImageDataToFormData:(id)a0;
- (BOOL)enableVisionSearchImageCompressBlock;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
