@class NSString;
@protocol IESLiveRoomService, IESLiveLinkmicLinkMessageDelegate;

@interface IESLiveLinkmicLinkAudienceMessage : NSObject <HTSLiveMessageSubscriber, IESLiveLinkmicLinkMessage>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveLinkmicLinkMessageDelegate> delegate;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long fallBackScene;

- (void)registMessage;
- (void)handleLinkMicMethod:(id)a0;
- (void)handleLinkMessage:(id)a0;
- (BOOL)isValidByScene:(unsigned long long)a0;
- (BOOL)isValidByFallbackScene:(unsigned long long)a0;
- (id)initWithRoom:(id)a0 scene:(unsigned long long)a1;
- (BOOL)isVaildByUILayout:(int)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
