@class NSString;

@interface WCFinderVideoBufferingUnit : NSObject

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long startBufferingTimestampInMS;
@property (nonatomic) unsigned long long endBufferingTimestampInMS;

- (void).cxx_destruct;

@end
