@class WCFinderActionWatcherCollection, WCFinderFeedArrayChain, NSMutableDictionary, NSArray, NSMutableArray;
@protocol WCFinderFeedArrayDelegate;

@interface WCFinderFeedArray : NSObject <NSFastEnumeration> {
    struct map<NSString *, FeedItem, CompareTid, std::allocator<std::pair<NSString *const, FeedItem>>> { struct __tree<std::__value_type<NSString *, FeedItem>, std::__map_value_compare<NSString *, std::__value_type<NSString *, FeedItem>, CompareTid>, std::allocator<std::__value_type<NSString *, FeedItem>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, FeedItem>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, FeedItem>, CompareTid>> { unsigned long long __value_; } __pair3_; } __tree_; } _feedMap;
    struct DelegateFlag { unsigned char ignoreContentVM : 1; unsigned char ignoreDataItem : 1; unsigned char ignoreFinderStreamCard : 1; unsigned char insertContentVMS : 1; } _delegateFlag;
}

@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderFeedArrayChain *chain;
@property (retain, nonatomic) WCFinderActionWatcherCollection *watchers;
@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (retain, nonatomic) NSMutableDictionary *pendingRemoves;
@property (weak, nonatomic) id<WCFinderFeedArrayDelegate> delegate;
@property (readonly, nonatomic) NSArray *tidArray;

+ (id)array:(int)a0;

- (id)init;
- (id)initWithChain:(id)a0 scene:(int)a1;
- (unsigned long long)count;
- (BOOL)notEmpty;
- (id)feeds;
- (long long)indexOfTid:(id)a0;
- (id)feedAtIndex:(long long)a0;
- (id)feedOfTid:(id)a0;
- (id)firstFeed;
- (id)lastFeed;
- (BOOL)containFeed:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)sink:(id)a0 watcher:(id)a1;
- (void)unsink:(id)a0;
- (void)unsink:(id)a0 watcher:(id)a1;
- (void)_notifyChange;
- (void)modify:(id /* block */)a0;
- (void)_apply:(id)a0 source:(id)a1;
- (struct FeedArrayModifyCache { id x0; id x1; })_doApply:(id)a0 source:(id)a1;
- (id)_createVMArrayFromExists:(id)a0 cache:(struct FeedArrayModifyCache { id x0; id x1; } *)a1;
- (BOOL)_ignoreItem:(id)a0;
- (BOOL)_ignoreContentVM:(id)a0;
- (id)_convertVMFromExistsVM:(id)a0;
- (id)_convertVMFromItem:(id)a0;
- (id)_generateContentTidFromItem:(id)a0;
- (void)_afterApply:(id)a0 removes:(id)a1;
- (id)_mapperContentVM:(id)a0 ignoreExists:(BOOL)a1 cache:(struct FeedArrayModifyCache { id x0; id x1; } *)a2;
- (id)duplicateRefArray:(int)a0;
- (id)duplicateRefArray:(int)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
