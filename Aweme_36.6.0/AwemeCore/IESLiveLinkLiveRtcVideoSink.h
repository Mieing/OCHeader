@class NSString, IESLiveLinkLiveRtc;

@interface IESLiveLinkLiveRtcVideoSink : NSObject <ByteRTCVideoSinkDelegate>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) id /* block */ videoFrameCallback;
@property (weak, nonatomic) IESLiveLinkLiveRtc *owner;
@property (nonatomic) BOOL enableVideoFrameCallbackOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserId:(id)a0 owner:(id)a1 block:(id /* block */)a2;
- (void)onFrame:(id)a0;
- (void).cxx_destruct;

@end
