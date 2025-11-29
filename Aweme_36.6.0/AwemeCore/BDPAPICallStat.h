@class NSString;

@interface BDPAPICallStat : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) double beginTimeStamp;
@property (nonatomic) double totalDuration;

- (void).cxx_destruct;

@end
