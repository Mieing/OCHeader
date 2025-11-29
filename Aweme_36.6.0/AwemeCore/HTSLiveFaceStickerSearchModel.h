@class NSString, NSArray;
@protocol IESLiveEffectPlatformService;

@interface HTSLiveFaceStickerSearchModel : NSObject

@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (copy, nonatomic) NSString *searchWord;
@property (nonatomic) BOOL isUseHot;
@property (retain, nonatomic) NSArray *effects;
@property (nonatomic) BOOL shouldShowTagView;
@property (nonatomic) BOOL shouldShowHot;
@property (retain, nonatomic) NSArray *hashList;
@property (nonatomic) BOOL stopAnimation;
@property (nonatomic) BOOL isSearchPopMode;
@property (nonatomic) BOOL hasTouchSearchBtn;
@property (retain, nonatomic) NSString *searchID;
@property (nonatomic) BOOL shouldReload;
@property (nonatomic) BOOL isTagSearch;
@property (retain, nonatomic) NSString *LiveRecommendTipsString;
@property (retain, nonatomic) NSString *LiveSearchTipsString;

+ (void)storeSearchWord:(id)a0;
+ (void)releaseSearchWord;
+ (id)getSearchWordInCache;

- (void)fetchSearchEffectsWithKeyWord:(id)a0 withSearchID:(id)a1 withCusor:(long long)a2 completion:(id /* block */)a3;
- (void)fetchRecommandWordsWithCompletetion:(id /* block */)a0;
- (void).cxx_destruct;

@end
