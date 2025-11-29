@class NSArray, NSMutableDictionary, WCFacade, NSString, WCHotwordRegExpReplacer;

@interface WCMomentsContentDiscoverer : NSObject <WCFinderKeywordConfigsChangedExt>

@property (nonatomic) BOOL hotwordConfigurationsChanged;
@property (copy, nonatomic) NSArray *hotwordConfigurations;
@property (retain, nonatomic) WCHotwordRegExpReplacer *hotwordRegExpReplacer;
@property (retain, nonatomic) NSMutableDictionary *discoveryContentCacheForDataItems;
@property (retain, nonatomic) NSMutableDictionary *discoveryContentCacheForUserComments;
@property (weak, nonatomic) WCFacade *referredFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retrieveOriginalStringFromDiscoveryString:(id)a0 forDataItem:(id)a1;
- (id)retrieveOriginalStringFromDiscoveryString:(id)a0 forUserComment:(id)a1;
- (id)init;
- (id)keyForDataItem:(id)a0;
- (id)keyForUserComment:(id)a0;
- (void)clearCache;
- (BOOL)canDisplayHotwords;
- (unsigned long long)matchingHotwordsMaxCount;
- (unsigned long long)matchingHotwordsMaxLength;
- (void)updateHotwordConfigurations:(id)a0;
- (void)checkUpdatesForHotwords;
- (id)hotwordConfigurationsFromFinderConfigurations:(id)a0;
- (id)hotwordRegExpReplacerFromConfigurations:(id)a0;
- (void)discoverInAllContentsForDataItems:(id)a0;
- (void)discoverInContentDescForDataItem:(id)a0;
- (void)discoverInContentForUserComment:(id)a0 fromDataItem:(id)a1;
- (unsigned long long)hotwordDiscoverContentTypesForDataItem:(id)a0;
- (void)discoverHotwordsForDataItems:(id)a0;
- (void)discoverHotwordsForDataItem:(id)a0;
- (void)_discoverHotwordsInContentDescForDataItem:(id)a0;
- (void)_discoverHotwordsInContentForUserComment:(id)a0 fromDataItem:(id)a1;
- (id)urlStringForHotwordMatch:(id)a0;
- (id)hotwordMatchFromURLString:(id)a0;
- (void)onFinderKeywordConfigsChanged:(id)a0;
- (void).cxx_destruct;

@end
