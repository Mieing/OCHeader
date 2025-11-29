@class NSString;

@interface WCFInderJSAPIFeedReadRecard : NSObject

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long start_play_time_ms;
@property (nonatomic) unsigned long long stay_time_ms;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
