@class NSString, NSObject;

@interface RTVXRMuteAudioAction : RTVXRAction

@property (nonatomic, getter=isMuted) BOOL mute;
@property (readonly, copy, nonatomic) NSString *reason;
@property (retain, nonatomic) NSObject *token;

- (id)initWithActionType:(long long)a0 roomID:(id)a1;
- (id)initWithActionType:(long long)a0 roomID:(id)a1 reason:(id)a2;
- (void).cxx_destruct;

@end
