@class NSString;

@interface AFDNonVideoInsertRecommendTask : NSObject <AFDNonVideoInsertTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canInsert:(id)a0 dataController:(id)a1 currentIndex:(long long)a2;
- (id)insertInfoWith:(id)a0 dataController:(id)a1 currentIndex:(long long)a2 isRefresh:(BOOL)a3;
- (long long)priority;

@end
