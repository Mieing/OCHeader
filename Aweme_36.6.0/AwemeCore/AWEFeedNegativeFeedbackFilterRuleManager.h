@class NSMutableArray;
@protocol AWEFeedNegativeFeedbackFilterDataProtocol;

@interface AWEFeedNegativeFeedbackFilterRuleManager : NSObject <AWEFeedNegativeFeedbackFilterDataProtocol>

@property (retain, nonatomic) NSMutableArray *cachedfilters;
@property (weak, nonatomic) id<AWEFeedNegativeFeedbackFilterDataProtocol> dataDelegate;

- (id)negativeFeedbackInfoDict;
- (BOOL)shouldBeFilteredWithModel:(id)a0;
- (void)registerNegativeFiltersClass;
- (id)negativeFilterClassArray;
- (id)filterNegativeVideosWithAwemeList:(id)a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
