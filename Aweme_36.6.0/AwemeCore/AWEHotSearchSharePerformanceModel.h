@interface AWEHotSearchSharePerformanceModel : NSObject

@property (nonatomic) double viewInitTime;
@property (nonatomic) double clickTime;
@property (nonatomic) double QRDataBackTime;
@property (nonatomic) double hotSearchDataBackTime;
@property (nonatomic) double FeLoadDataTime;
@property (nonatomic) double renderFinishTime;
@property (nonatomic) double showTime;
@property (readonly, nonatomic) double allTime;
@property (readonly, nonatomic) double fetchTime;
@property (readonly, nonatomic) double renderTime;

@end
