@class NSDictionary, NSArray, NSMapTable;

@interface IESLiveThreadInfo : NSObject

@property (nonatomic) double appCPUUsage;
@property (nonatomic) double mainThreadCPU;
@property (nonatomic) long long runningCount;
@property (nonatomic) long long waitingCount;
@property (retain, nonatomic) NSDictionary *priority;
@property (retain, nonatomic) NSDictionary *threadCPU;
@property (retain, nonatomic) NSArray *detailInfos;
@property (retain, nonatomic) NSMapTable *threads;

- (void).cxx_destruct;

@end
