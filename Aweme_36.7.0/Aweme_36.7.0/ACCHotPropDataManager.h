@class AWEStickerPicckerDataSource, NSString, NSArray, NSDictionary, AWEStickerPickerModel;

@interface ACCHotPropDataManager : NSObject

@property (retain, nonatomic) NSString *baseUrl;
@property (copy, nonatomic) NSArray *urlPrefix;
@property (retain, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *favorEffects;
@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long pageCount;
@property (nonatomic) BOOL isFavorRequestSuccess;
@property (nonatomic) BOOL isHotRequestSuccess;
@property (nonatomic) BOOL isFavorRequesting;
@property (nonatomic) BOOL isHotRequesting;
@property (nonatomic) BOOL isRecognitionRequesting;
@property (copy, nonatomic) NSArray *recognitionEffects;
@property (nonatomic) BOOL needFallbackEffects;
@property (nonatomic) long long testStatusType;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *fromPropId;
@property (copy, nonatomic) id /* block */ currentSelectedMusicHandler;
@property (retain, nonatomic) AWEStickerPicckerDataSource *propPickerDataSource;
@property (retain, nonatomic) AWEStickerPickerModel *propPickerModel;
@property (retain, nonatomic) NSDictionary *loadEffectRequestExtraParameters;

- (void)handleFavoriteEffectModels:(id)a0;
- (void)insertPropToFavorite:(id)a0;
- (void)deletePropFromFavorite:(id)a0;
- (id)extraParamsBeforeRequest;
- (void)loadDataWithOptions:(id)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void)handleResponse:(id)a0 requestError:(id)a1 completion:(id /* block */)a2;
- (void)fetchFavorWithCompletion:(id /* block */)a0;
- (void)updateFavoriteEffects:(id)a0;
- (void)changeFavoriteWithEffect:(id)a0 favorite:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadDataCompletion:(id /* block */)a0;
- (void)loadRecognitionWithParams:(id)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void)clearRecognitionProps;
- (void).cxx_destruct;
- (id)initWithCount:(long long)a0;

@end
