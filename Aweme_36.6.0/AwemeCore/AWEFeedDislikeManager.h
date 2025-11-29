@class NSMutableDictionary;

@interface AWEFeedDislikeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dislikeModelsDict;

+ (id)sharedInstance;

- (id)latestDislikeItemsStringWithReferString:(id)a0;
- (void)addDislikeModelIfNeededWithReferString:(id)a0 model:(id)a1;
- (id)searchQueryDislikeDictWithReferString:(id)a0;
- (id)dislikeModelsWithReferString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
