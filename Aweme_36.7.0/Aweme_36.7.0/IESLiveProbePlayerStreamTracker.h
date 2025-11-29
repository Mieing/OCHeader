@class NSNumber, NSString;

@interface IESLiveProbePlayerStreamTracker : NSObject <IESLiveProbePlayerStreamTrackerService>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)probeStreamWithRoom:(id)a0 position:(long long)a1;
- (void)markProbeStreamCorrect:(id)a0 playerRender:(BOOL)a1 timeout:(BOOL)a2;
- (BOOL)isNotSameRoom:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
