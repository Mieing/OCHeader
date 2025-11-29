@class NSString;

@interface TMPasteboardCacheStrategy : NSObject <TSPKCacheUpdateStrategy, TSPKCacheStrategyGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generate:(id)a0;

- (BOOL)needUpdate:(id)a0 cacheStore:(id)a1;

@end
