@class NSMutableDictionary;

@interface IESLiveLinkRTCInteractVideosDurationStatistics : NSObject

@property (retain, nonatomic) NSMutableDictionary *remoteVideoSubScribeStart;
@property (retain, nonatomic) NSMutableDictionary *remoteVideoSubScribeEnd;

- (double)calculatVideosSubScribeDuration;
- (void)endRecordTimeStamp:(id)a0;
- (void)startRecordTimeStamp:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
