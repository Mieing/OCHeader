@class NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWETeenLongConnectionManager : NSObject <IESLCMessageHandlerService>

@property (nonatomic) BOOL ignoreMessage;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)p_handleOnReceiveAWEPushServiceWithMsg:(id)a0;
- (void)updateIgonreMessage:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
