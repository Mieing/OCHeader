@class NSArray, NSString, NSMutableDictionary, AWEMemoriesPlayerTileModel, UIViewController;

@interface AWEMemoriesPlayerDataController : NSObject <AWEMemoriesPlayerDataControllerProtocol>

@property (copy, nonatomic) NSArray *memoriesModelsArray;
@property (copy, nonatomic) NSArray *appendModelsArray;
@property (copy, nonatomic) NSArray *authorizationModelsArray;
@property (copy, nonatomic) NSArray *themeMemoriesArray;
@property (copy, nonatomic) NSArray *specificModelsArray;
@property (copy, nonatomic) id /* block */ dataSourceHandler;
@property (copy, nonatomic) id /* block */ dataSourceBlock;
@property (copy, nonatomic) id /* block */ playedFinished;
@property (nonatomic) unsigned long long preloadRemainingCount;
@property (nonatomic) long long preloadBuffer;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) BOOL isLoadingSpecificData;
@property (copy, nonatomic) NSString *brandName;
@property (nonatomic) BOOL autoPlay;
@property (weak, nonatomic) UIViewController *businessViewController;
@property (retain, nonatomic) NSMutableDictionary *businessExtraDict;
@property (readonly, copy, nonatomic) NSArray *tileModelsArray;
@property (readonly, nonatomic) AWEMemoriesPlayerTileModel *currentPlayerTileModel;
@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreData;
- (void)reloadWithMemoriesPlayerModels:(id)a0;
- (void)loadMoreDataHandler:(id /* block */)a0;
- (void)appendWithAuthorizationModels:(id)a0;
- (void)appendWithMemoriesPlayerModels:(id)a0;
- (void)appendWithThemesPlayerModels:(id)a0;
- (void)appendWithSpecificPlayerModels:(id)a0;
- (long long)indexOfMemoriesWithType:(unsigned long long)a0 ID:(id)a1;
- (BOOL)matchPlayerModel:(id)a0 withType:(unsigned long long)a1 andID:(id)a2;
- (void)allMemoriesDidPlayedFinished:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
