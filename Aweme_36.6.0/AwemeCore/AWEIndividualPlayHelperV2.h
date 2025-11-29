@class NSArray;

@interface AWEIndividualPlayHelperV2 : NSObject

@property (copy, nonatomic) NSArray *cacheFeedList;
@property (nonatomic) double feedRequestTimeStamp;
@property (nonatomic) double feedResponseTimeStamp;

+ (id)sharedInstance;

- (BOOL)canIndividualPlayV2;
- (void)markUseIndividualPlayV2;
- (void)showDelayTabbarIfNeededWithSource:(id)a0;
- (id)jumpBtnInfoWithModel:(id)a0;
- (void)saveFeedRequestTimeStamp;
- (void)saveNoIndividualReason:(unsigned long long)a0;
- (BOOL)hasValidModel;
- (id)cacheHotList;
- (BOOL)p_canIndividualPlayV2ForReason:(unsigned long long)a0;
- (void).cxx_destruct;

@end
