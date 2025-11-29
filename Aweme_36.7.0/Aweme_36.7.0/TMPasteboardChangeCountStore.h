@class NSString;

@interface TMPasteboardChangeCountStore : NSObject <TSPKSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)lastPasteboardChangeCount:(id)a0;
+ (void)syncPasteboardChangeCount:(id)a0;
+ (id)cacheKey:(id)a0;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)uniqueId;

@end
