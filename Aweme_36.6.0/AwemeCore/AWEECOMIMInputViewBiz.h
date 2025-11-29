@class NSString, NSDictionary, AWEECOMIMInputViewOptions, AWEECOMIMNetworkImp, AWEECOMIMChooseMediaApi;

@interface AWEECOMIMInputViewBiz : NSObject <UIDocumentPickerDelegate>

@property (retain, nonatomic) AWEECOMIMChooseMediaApi *chooseMediaApi;
@property (copy, nonatomic) id /* block */ onSendPhotos;
@property (copy, nonatomic) id /* block */ oneTakePhotoBlock;
@property (copy, nonatomic) id /* block */ onSendFiles;
@property (copy, nonatomic) NSDictionary *videoSetting;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (readonly, nonatomic) long long fileLimitCount;
@property (readonly, nonatomic) long long fileLimitSize;
@property (copy, nonatomic) NSDictionary *requestCommonParams;
@property (retain, nonatomic) AWEECOMIMInputViewOptions *options;
@property (copy, nonatomic) NSString *goodsIcon;
@property (copy) NSString *sendGoodsURL;
@property (nonatomic) BOOL enableInputBoxIconV2;
@property (nonatomic) BOOL isMoreButtonSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateRequestParamsWithParams:(id)a0;
- (void)fetchMoreViewDataWithCompletion:(id /* block */)a0;
- (id)getMoreViewDefaultItems;
- (void)sendPhotosWithAssets:(id)a0 itemType:(unsigned long long)a1;
- (void)showOverSizeErrorWithCount:(long long)a0;
- (id)initWithRequestCommonParams:(id)a0 networkImp:(id)a1;
- (void)updateOptionsShopExtraConfig:(id)a0;
- (void)fetchQuickEntryDataWithCompletion:(id /* block */)a0;
- (void)preCheckV2WithIconType:(id)a0 completion:(id /* block */)a1;
- (void)preCheckEventWithIconType:(id)a0 completion:(id /* block */)a1;
- (void)onClickChoosePhotoWithCompletion:(id /* block */)a0 clickTask:(id)a1;
- (void)onClickTakePhotoWithCompletion:(id /* block */)a0 clickTask:(id)a1;
- (void)onClickChooseFilesWithCompletion:(id /* block */)a0 clickTask:(id)a1;
- (void)fetchSendGoodsSchemaWithCompletion:(id /* block */)a0;
- (void)callMediaWithType:(unsigned long long)a0 clickTask:(id)a1;
- (void)p_showLimitCountAlert;
- (id)p_makeMetaInfoFromURL:(id)a0;
- (void)p_showLimitSizeAlert;
- (void)p_showLimitTypeAlert;
- (id)p_processFileItem:(id)a0;
- (void)p_sendPhotosWithModels:(id)a0;
- (void).cxx_destruct;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;

@end
