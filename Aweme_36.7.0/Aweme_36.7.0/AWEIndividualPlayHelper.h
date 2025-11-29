@class NSArray;

@interface AWEIndividualPlayHelper : NSObject

@property (copy, nonatomic) NSArray *cacheFeedList;
@property (nonatomic) double feedRequestTimeStamp;
@property (nonatomic) double feedResponseTimeStamp;

- (id)jumpBtnInfoWithModel:(id)a0;
- (BOOL)canIndividualPlay;
- (void)saveFeedRequestTimeStamp;
- (void)saveNoIndividualReason:(unsigned long long)a0;
- (BOOL)hasValidModel;
- (id)cacheHotList;
- (void).cxx_destruct;

@end
