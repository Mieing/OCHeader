@class NSString;

@interface WCFinderSearchStatFeedReadInfo : NSObject

@property (retain, nonatomic) NSString *feed_id;
@property (nonatomic) unsigned long long stay_time_ms;
@property (nonatomic) unsigned long long start_play_time_ms;

- (void)mergeData:(id)a0;
- (void).cxx_destruct;

@end
