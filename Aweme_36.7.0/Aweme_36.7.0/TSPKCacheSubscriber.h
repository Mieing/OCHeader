@class NSString;

@interface TSPKCacheSubscriber : NSObject <TSPKSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)uniqueId;

@end
