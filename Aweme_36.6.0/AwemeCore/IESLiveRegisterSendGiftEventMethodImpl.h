@class NSString;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRegisterSendGiftEventMethodImpl : IESLiveRegisterSendGiftEventMethod <HTSLiveMessageSubscriber, HTSLiveSendGiftActions>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL needHandleSendGiftResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)didGiveGiftWithResponse:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
