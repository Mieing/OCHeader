@class NLEInterface_OC;

@interface CECMCEditViewPlayer : NSObject

@property (retain, nonatomic) NLEInterface_OC *session;

- (void)addNLEMainVideoTrackToNLEModel:(id)a0 withRecorderAssets:(id)a1;
- (void)setVideoData:(id)a0 preview:(id)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)dealloc;

@end
