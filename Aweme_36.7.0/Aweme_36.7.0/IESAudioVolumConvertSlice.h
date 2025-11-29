@interface IESAudioVolumConvertSlice : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long pointCount;
@property (nonatomic) long long sliceId;

@end
