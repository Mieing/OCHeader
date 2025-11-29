@class NSMutableDictionary, NSMutableSet;

@interface AWEIMComponentViewCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (nonatomic) long long createViewCount;
@property (retain, nonatomic) NSMutableSet *leafViewSet;

- (void)setView:(id)a0 forKey:(id)a1 isLeaf:(BOOL)a2;
- (void)removeViewsForKeys:(id)a0;
- (id)currentStorage;
- (id)leafNodeViewSet;
- (id)viewForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)allViews;

@end
