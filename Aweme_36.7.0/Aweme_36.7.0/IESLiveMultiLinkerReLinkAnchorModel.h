@class NSMutableArray;

@interface IESLiveMultiLinkerReLinkAnchorModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long relinkAnchorWaitedTime;
@property (nonatomic) unsigned long long relinkAnchorPredictWaitTime;
@property (retain, nonatomic) NSMutableArray *relinkAnchorArray;

- (void).cxx_destruct;

@end
