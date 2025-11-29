@class NSString, MMAsyncBlockOperation, NSOperationQueue, NSDictionary;
@protocol EmoticonDescRecommandLogicDelegate;

@interface EmoticonDescRecommandLogic : NSObject <MMEmoticonResExt, IEmoticonMgrExt, EmoticonInputRecommendMgrExt>

@property (nonatomic) unsigned int maxIndexCount;
@property (retain, nonatomic) NSOperationQueue *configQueue;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (retain, nonatomic) NSString *waitToSearchKeyword;
@property (weak) MMAsyncBlockOperation *lastSearchOperation;
@property (nonatomic) BOOL needRebuildDesc;
@property (retain, nonatomic) NSDictionary *emoticonDescToMd5Cache;
@property (retain, nonatomic) NSDictionary *packageIndex;
@property (retain, nonatomic) NSDictionary *descAliasDic;
@property (nonatomic) int cacheVersion;
@property (nonatomic) BOOL needLoadCustomEmotionDesc;
@property (nonatomic) unsigned int maxLengthForCustomDesc;
@property (retain, nonatomic) NSDictionary *descToCustomMd5Cache;
@property (weak, nonatomic) id<EmoticonDescRecommandLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)asyncSearchForKeyword:(id)a0 descToMd5Cache:(id)a1 cacheVersion:(int)a2 packageIndex:(id)a3 descAliasDic:(id)a4 descToCustomMd5Cache:(id)a5 maxLengthForCustomDesc:(unsigned int)a6;
+ (id)filterNoImageEmoticons:(id)a0;
+ (id)filterNotInDBEmoticons:(id)a0;
+ (id)adjustedStringWithDesc:(id)a0;
+ (void)showCustomEmoticonMeaningDebugViewInVC:(id)a0;

- (id)init;
- (void)loadDataIfNeeded;
- (void)reloadDataAndNeedClearCache:(BOOL)a0;
- (void)setNeedsReloadCustomEmoticonDesc;
- (void)loadCustonEmoticonDescWithCompletionBlock:(id /* block */)a0;
- (void)asyncLoadDescAliasConfigDir:(id)a0;
- (void)loadDescAliasConfigDir:(id)a0;
- (void)searchEmoticonWithKeyword:(id)a0;
- (BOOL)isInWordList:(id)a0;
- (BOOL)hasLoadMd5Cache;
- (void)rebuildDescToMd5CacheWithCompletionBlock:(id /* block */)a0;
- (void)updateDescToMd5Cache:(id)a0 FromEmoticonPackageDesc:(id)a1;
- (void)continueSearchIfNeeded;
- (void)onEmoticonResUpdateForSubType:(unsigned int)a0 dirPath:(id)a1;
- (void)OnUpdateEmoticonListFor:(unsigned long long)a0;
- (void)onLocalRecommendLocalEmojiOcrResultUpdate;
- (void).cxx_destruct;

@end
