@class NSMutableDictionary;

@interface IESLLLiveDataCenterCommonSource : NSObject <IESLLLiveDataCenterSource>

@property (retain, nonatomic) NSMutableDictionary *dataSource;

- (void)setData:(id)a0 data:(id)a1 isAppLifeCycle:(BOOL)a2;
- (void)handleRegisterMsgSubscriber:(id)a0;
- (void)handleUnRegisterMsgSubscriber:(id)a0;
- (void)handleReleaseMsgCenter:(unsigned long long)a0 extra:(id)a1;
- (void)addListener:(id)a0 subscriber:(id)a1;
- (void)removeListener:(id)a0 subscriber:(id)a1;
- (void).cxx_destruct;
- (id)getData:(id)a0;

@end
