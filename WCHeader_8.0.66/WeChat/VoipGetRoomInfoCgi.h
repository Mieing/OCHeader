@class VoipMonoMsg;
@protocol VoipGetRoomInfoCgiDelegate;

@interface VoipGetRoomInfoCgi : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) VoipMonoMsg *m_voipMonoMsg;
@property (weak, nonatomic) id<VoipGetRoomInfoCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
