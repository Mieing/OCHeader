@class NSString;
@protocol IESLiveGameOpenPlatformAppInstance;

@interface IESLiveGameOpenPlatformAppInstanceStateStore : NSObject <IESLiveGameOpenPlatformAppInstanceStateStore>

@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<IESLiveGameOpenPlatformAppInstance> appInstance;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)stateChanged:(unsigned long long)a0 fromClass:(id)a1 selector:(id)a2;
- (id)initWithAppInstance:(id)a0;
- (void)_monitorStateChangedErrorFromState:(unsigned long long)a0 toState:(unsigned long long)a1 fromClass:(id)a2 selector:(id)a3;
- (void).cxx_destruct;
- (void)stateChanged:(unsigned long long)a0;
- (unsigned long long)currentState;

@end
