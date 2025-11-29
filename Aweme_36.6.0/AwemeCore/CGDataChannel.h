@class NSString, NSMutableDictionary, CGConfiguration;
@protocol CGRTCRoom;

@interface CGDataChannel : NSObject <CGCloudPlayerStatusUpdateMessage, CGDataChannel, CGRTCDataChannelDelegate>

@property (weak, nonatomic) id<CGRTCRoom> room;
@property (weak, nonatomic) CGConfiguration *configuration;
@property (retain, nonatomic) NSMutableDictionary *dictHandlers;
@property (retain, nonatomic) NSMutableDictionary *dataHandlers;
@property (nonatomic) BOOL isMatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessageWithData:(id)a0;
- (void)sendMessageWithString:(id)a0;
- (void)sendMessageWithDictionary:(id)a0;
- (void)registerDataMessageWithMsgType:(int)a0 msgSubType:(int)a1 target:(id)a2 selector:(SEL)a3;
- (void)registerDictionaryMessageWithCommand:(long long)a0 target:(id)a1 selector:(SEL)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void)onUserMessageReceived:(id)a0 message:(id)a1;
- (void)onUserBinaryMessageReceived:(id)a0 message:(id)a1;
- (void)onUserMessageSendResult:(long long)a0 error:(long long)a1;
- (id)initWithConfiguration:(id)a0 room:(id)a1;
- (void)sendUserConnectionCommand;
- (void).cxx_destruct;
- (void)dealloc;

@end
