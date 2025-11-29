@class NSString, NSMutableArray;

@interface AWEFeedDislikeFilterManager : NSObject <AWEFeedDislikeFilterProtocol>

@property (retain, nonatomic) NSMutableArray *cachedfilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)enabled;

- (id)filterArrayWithModels:(id)a0;
- (void)dislikeWithModel:(id)a0 referString:(id)a1;
- (void)revertDislikeWithModel:(id)a0 referString:(id)a1;
- (void)registerFilters;
- (void)submitDislikeReasons:(id)a0 awemeModel:(id)a1;
- (id)filterClassArray;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
