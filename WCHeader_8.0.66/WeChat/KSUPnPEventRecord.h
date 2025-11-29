@class NSError;

@interface KSUPnPEventRecord : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
