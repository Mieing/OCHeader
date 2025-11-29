@interface AWEShowMonetizeAnnieXCardTrackInfo : NSObject

@property (nonatomic) double willLoadTime;
@property (nonatomic) double didFinishLoadTime;
@property (nonatomic) double loadEndTime;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;

@end
