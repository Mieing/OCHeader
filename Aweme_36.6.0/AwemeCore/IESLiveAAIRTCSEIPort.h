@class RACDisposable, NSString;

@interface IESLiveAAIRTCSEIPort : NSObject <IESLiveSocialInteractAction, IESLiveMultiAudioAction, IESLiveAAIGamePortDelegate>

@property (retain, nonatomic) RACDisposable *rtcSEIDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ throwPacketBlock;

- (id)initWithDIContext:(id)a0;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)receiveHeartBeat:(id)a0;
- (void).cxx_destruct;

@end
