@class NSIndexPath, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, ACCVoiceEffectFavoriteDataSource, IESEffectPlatformResponseModel, UIColor;
@protocol ACCVoiceEffectDataSourceAdapter, ACCVoiceEffectItemProtocol;

@interface ACCVoiceEffectDataSource : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemMaps;
@property (nonatomic) unsigned long long preparedData;
@property (retain, nonatomic) NSArray *favoriteArr;
@property (retain, nonatomic) NSArray *customArr;
@property (retain, nonatomic) IESEffectPlatformResponseModel *response;
@property (weak, nonatomic) id<ACCVoiceEffectDataSourceAdapter> adapter;
@property (retain, nonatomic) NSIndexPath *landingIndex;
@property (retain, nonatomic) NSString *landingID;
@property (nonatomic) unsigned long long landingTab;
@property (retain, nonatomic) NSIndexPath *preIndex;
@property (retain, nonatomic) NSIndexPath *curIndex;
@property (retain, nonatomic) NSIndexPath *nxtIndex;
@property (nonatomic) double preferPanelHeight;
@property (retain, nonatomic) UIColor *preferFavoriteButtonColor;
@property (retain, nonatomic) NSString *panelID;
@property (retain, nonatomic) NSMutableArray *categories;
@property (retain, nonatomic) ACCVoiceEffectFavoriteDataSource *favoriteDataSource;
@property (nonatomic) unsigned long long dataStatus;
@property (retain, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) id /* block */ dataReloadCompletion;
@property (nonatomic) BOOL modernUI;
@property (nonatomic) BOOL showTitleView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL fetchUserVoice;
@property (retain, nonatomic) id<ACCVoiceEffectItemProtocol> addVoiceItem;
@property (readonly, nonatomic) long long customVoiceCount;
@property (readonly, nonatomic) long long originalNamedEffectCount;

+ (void)deleteCustomVoiceEffect:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)deleteCustomVoiceSpeakId:(id)a0 scene:(id)a1 completion:(id /* block */)a2;

- (void)retryFetch;
- (void)constructDataSource;
- (id)insertEffectToHotAndSelect:(id)a0;
- (id)findItem:(id)a0;
- (void)fetchPanelInfoAndLandID:(id)a0 tabIndex:(unsigned long long)a1;
- (id)initWithPanelID:(id)a0 adapter:(id)a1;
- (id)categoryOfIndex:(unsigned long long)a0;
- (id)titleOfIndex:(unsigned long long)a0;
- (void)reloadWithDefaultIDFirstLanding:(BOOL)a0;
- (void)fetchFavoriteList;
- (void)fetchPanelInfo;
- (void)constructIfDataPrepared;
- (void)resetAllItemsInitStatus;
- (void)resortItemsForEachCategory;
- (id)locateDefaultID;
- (id)locateIDInAllCategory;
- (id)constructFavoriteCategoryModel;
- (id)constructHotCategoryModelUseModel:(id)a0 index:(unsigned long long)a1;
- (id)constructCategoryModelUseModel:(id)a0 index:(unsigned long long)a1;
- (id)getLinkageItemUseEffect:(id)a0;
- (id)sortItemsArr:(id)a0 atPage:(unsigned long long)a1 locateID:(id)a2;
- (void)deleteCustomEffect:(id)a0;
- (void).cxx_destruct;
- (id)itemAtIndex:(id)a0;

@end
