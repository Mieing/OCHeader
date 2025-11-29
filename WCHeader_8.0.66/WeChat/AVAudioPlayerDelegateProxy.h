@class NSString;

@interface AVAudioPlayerDelegateProxy : NSObject <AVAudioPlayerDelegate>

@property (weak, nonatomic) id target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithTarget:(id)a0;

- (id)initWithTarget:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
