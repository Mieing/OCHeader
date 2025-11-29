@class NSSet, NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWEUserLongConnectionManager : NSObject <IESLCMessageHandlerService>

@property (copy, nonatomic) NSSet *hasPushSet;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)registerByteSync;
- (void)p_handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
