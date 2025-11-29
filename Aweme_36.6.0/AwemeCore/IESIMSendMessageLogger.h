@class NSString, NSMutableDictionary;
@protocol IESLCConnectManagerProtocol;

@interface IESIMSendMessageLogger : NSObject <IESIMSendMessageLoggerProtocol>

@property (retain, nonatomic) NSMutableDictionary *metricsDict;
@property (retain, nonatomic) id<IESLCConnectManagerProtocol> lcConnectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetricsModelOfMessage:(id)a0;
- (void)updateMetricsModel:(id)a0 ofMessage:(id)a1;
- (void)recordStartSendMessage:(id)a0 inConversation:(id)a1 timestamp:(double)a2 notSaveToDB:(BOOL)a3;
- (void)recordFinishSendMessageWithResponse:(id)a0;
- (BOOL)p_checkMessageValid:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
