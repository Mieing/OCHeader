@class NSString;

@interface IESLiveVoiceTransitionCallBack : NSObject <SAMICoreCallbackListener>

@property (copy, nonatomic) id /* block */ translateResultCallBack;
@property (copy, nonatomic) id /* block */ translateFailedCallBack;
@property (copy, nonatomic) id /* block */ translateConnectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageReceived:(long long)a0 withBlock:(id)a1;
- (void).cxx_destruct;

@end
