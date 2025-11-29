@class NSString, NSMapTable, IESLLLiveDataCenterCommonSource;

@interface IESLLLiveDataCenterHandler : NSObject <IESLLLiveMessageHandler>

@property (retain, nonatomic) NSMapTable *dataSource;
@property (retain, nonatomic) IESLLLiveDataCenterCommonSource *commonSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleRegisterMsgSubscriber:(id)a0;
- (void)handleUnRegisterMsgSubscriber:(id)a0;
- (void)handleReleaseMsgCenter:(unsigned long long)a0 extra:(id)a1;
- (void)registerSource:(id)a0 key:(id)a1;
- (void)setData:(id)a0 data:(id)a1 source:(id)a2 isAppLifeCycle:(BOOL)a3;
- (id)getData:(id)a0 source:(id)a1;
- (BOOL)handlePostMessage:(id)a0 withSubscriber:(id)a1;
- (void)unregisterSourceWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
