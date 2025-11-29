@class NSDictionary, IESLiveSequenceTaskQueue;

@interface IESLivePreloadConfig : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSDictionary *strategyConfig;
@property (retain, nonatomic) IESLiveSequenceTaskQueue *beginAppearTaskQueue;
@property (retain, nonatomic) IESLiveSequenceTaskQueue *refreshTaskQueue;
@property (nonatomic) double startPreloadTime;

- (void).cxx_destruct;

@end
