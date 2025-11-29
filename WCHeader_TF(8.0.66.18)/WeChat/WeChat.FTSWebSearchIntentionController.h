@interface WeChat.FTSWebSearchIntentionController : NSObject {
    void /* unknown type, empty encoding */ _cgiTriggerInterval;
    void /* unknown type, empty encoding */ referee;
    void /* unknown type, empty encoding */ webSearchIntentionCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_netProvider;
}

@property (nonatomic) void /* unknown type, empty encoding */ localSearchBoxMinExposedHeight;

+ (BOOL)enabled;

- (BOOL)hasWebSearchIntentionFor:(id)a0;
- (BOOL)isWebSearchFirstMatchFor:(id)a0;
- (BOOL)isWebSearchFirstMatchTest3For:(id)a0;
- (void)addLocalSearchHistoryFor:(id)a0;
- (void)insertSearchSugItemClickWithPrefix:(id)a0 clickType:(unsigned int)a1 isLocal:(BOOL)a2;
- (void)insertSearchTextInputWithPrefix:(id)a0;
- (id)getSearchClickHistory;
- (id)getLastPrefixLocalClickInfoWithPrefix:(id)a0;
- (id)getSugPrefixSequence;
- (void)updateSearchIntentionDict;
- (id)init;
- (void).cxx_destruct;

@end
