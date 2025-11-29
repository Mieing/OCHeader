@class NSString;

@interface IESLLGDTrackerProbeRecord : NSObject

@property (nonatomic) long long newSource;
@property (nonatomic) long long oriSource;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id oriValue;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;

@end
