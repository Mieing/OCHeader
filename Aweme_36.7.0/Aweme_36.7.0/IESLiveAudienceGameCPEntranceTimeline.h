@class NSDictionary, NSMutableDictionary;

@interface IESLiveAudienceGameCPEntranceTimeline : NSObject

@property (retain, nonatomic) NSMutableDictionary *timestampMap;
@property (readonly, copy, nonatomic) NSDictionary *timelineDescription;

- (void)setTimestamp:(double)a0 state:(long long)a1;
- (double)timestampWithState:(long long)a0;
- (void)setCurrentTimestampForState:(long long)a0;
- (void).cxx_destruct;

@end
