@class NSMutableArray;

@interface IESLiveSlidePerfRecordItem : NSObject

@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long startFrameCount;
@property (nonatomic) long long endFrameCount;
@property (retain, nonatomic) NSMutableArray *dropFrameList;
@property (nonatomic) long long state;
@property (readonly, nonatomic) double fps;
@property (readonly, nonatomic) long long dropFrameTimes;
@property (nonatomic) long long minorDropCount;
@property (nonatomic) long long normalDropCount;
@property (nonatomic) long long mediumDropCount;
@property (nonatomic) long long criticalDropCount;
@property (nonatomic) double minorDropTime;
@property (nonatomic) double normalDropTime;
@property (nonatomic) double mediumDropTime;
@property (nonatomic) double criticalDropTime;
@property (nonatomic) double minorDropRate;
@property (nonatomic) double normalDropRate;
@property (nonatomic) double mediumDropRate;
@property (nonatomic) double criticalDropRate;
@property (nonatomic) double hitchTime;
@property (nonatomic) double hitchTimeRate;
@property (nonatomic) long long componentLoadState;

- (id)mostSeriousFrameLoss;
- (void)calculateDropFrameInfo;
- (void).cxx_destruct;

@end
