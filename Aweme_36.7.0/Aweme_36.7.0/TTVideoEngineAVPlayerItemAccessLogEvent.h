@class NSString;

@interface TTVideoEngineAVPlayerItemAccessLogEvent : NSObject

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSString *serverAddress;
@property (nonatomic) double durationWatched;

- (void).cxx_destruct;

@end
