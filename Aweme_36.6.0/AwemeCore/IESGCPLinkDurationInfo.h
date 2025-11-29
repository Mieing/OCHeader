@class NSMutableDictionary, CADisplayLink, NSString, NSNumber;

@interface IESGCPLinkDurationInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventStartTimes;
@property (retain, nonatomic) NSNumber *renderEnd;
@property (retain, nonatomic) NSNumber *interactEnd;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long firstFrame;
@property (nonatomic) long long interactiveFrame;
@property (readonly, copy, nonatomic) NSString *trackId;
@property (readonly, copy, nonatomic) NSString *triggerFrom;
@property (retain, nonatomic) NSMutableDictionary *eventDurations;
@property (retain, nonatomic) NSMutableDictionary *eventStamps;

- (id)initWithTrackId:(id)a0 triggerFrom:(id)a1;
- (void)traceEventStart:(id)a0 time:(id)a1;
- (void)traceEventEnd:(id)a0 time:(id)a1 completion:(id /* block */)a2;
- (void)traceViewRenderEnd:(id)a0 completion:(id /* block */)a1;
- (void)traceEventStamp:(id)a0 stampTime:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
