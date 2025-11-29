@class NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWESplashLongConnectionManager : NSObject <IESLCMessageHandlerService>

@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)p_handleOnReceiveAWEPushServiceWithMsg:(id)a0;
- (id)pushMessageDataDic:(id)a0;
- (id)init;
- (void)dealloc;

@end
