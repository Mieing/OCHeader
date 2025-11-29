@class SpeechSessionManagerParam;

@interface SpeechSessionManager : NSObject

@property (retain, nonatomic) SpeechSessionManagerParam *param;

- (id)initWithParam:(id)a0;
- (id)createRealtimeCallTaskWithParam:(id)a0 callback:(id)a1;
- (void)releaseRealtimeCallTask:(id)a0;
- (void)dealloc;

@end
