@class NSMapTable;

@interface AWESearchResultPageContextStore : NSObject

@property (retain, nonatomic) NSMapTable *store;

+ (id)fetchContextWithPage:(id)a0;
+ (void)registerPage:(id)a0 withContext:(id)a1;
+ (id)sharedStore;

- (void).cxx_destruct;
- (id)init;

@end
