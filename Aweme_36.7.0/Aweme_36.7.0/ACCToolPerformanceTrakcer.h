@class NSString, NSMutableDictionary, NSArray;

@interface ACCToolPerformanceTrakcer : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventBeginDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventEndDictionary;
@property (nonatomic) BOOL pending;
@property (copy, nonatomic) NSString *trackName;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL loseStartPointMark;
@property (copy, nonatomic) NSArray *waitingKeyArray;
@property (copy, nonatomic) NSString *primaryKey;
@property (copy, nonatomic) id /* block */ additionHandleBlock;

- (void)eventBegin:(id)a0;
- (void)eventEnd:(id)a0;
- (void)startTrack;
- (unsigned long long)getBeginForKey:(id)a0;
- (void)eventEnd:(id)a0 trackingBeginEvent:(id)a1;
- (void)eventEnd:(id)a0 trackingEndEvent:(id)a1;
- (void)eventEnd:(id)a0 interval:(double)a1;
- (void)eventEnd:(id)a0 trackingEndEvent:(id)a1 interval:(double)a2;
- (void)checkPrimaryKey;
- (long long)getDurationBetweenWithBeginKey:(id)a0 andEndKey:(id)a1;
- (void)failedTrackWithErrorCode:(long long)a0 noEventTracking:(BOOL)a1;
- (void)failedTrackWithErrorCode:(long long)a0;
- (void)startTrackWithParam:(id)a0;
- (void)realTrackWithParam:(id)a0;
- (BOOL)checkTrackDataFinished;
- (long long)getDurationBetween:(id)a0 and:(id)a1;
- (long long)getDuration:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithName:(id)a0;

@end
