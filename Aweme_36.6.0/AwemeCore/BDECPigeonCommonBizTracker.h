@class BDECPigeonClientV2, NSMutableSet;

@interface BDECPigeonCommonBizTracker : NSObject

@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) NSMutableSet *exceptionUniqueKeys;
@property (readonly, nonatomic) unsigned long long dealMessageWhenWebsocketArriveEventNo;
@property (readonly, nonatomic) unsigned long long filterMessageEventNo;
@property (readonly, nonatomic) unsigned long long didInsertNewMessagesEventNo;
@property (readonly, nonatomic) unsigned long long didReceiveSendResponseEventNo;

- (void)trackNetworkWithAPIName:(id)a0 pigeonBizType:(id)a1 error:(id)a2 jsonObj:(id)a3 statusCode:(long long)a4;
- (void)trackMessageDiagnosisEventWithEventNo:(unsigned long long)a0 pbMessage:(id)a1 messageSource:(id)a2 extDict:(id)a3;
- (void)trackMessageDiagnosisEventWithEventNo:(unsigned long long)a0 conversation:(id)a1 message:(id)a2 messageSource:(id)a3 extDict:(id)a4;
- (void)trackMessageDiagnosisEventWithEventNo:(unsigned long long)a0 trackModel:(id)a1 messageSource:(id)a2 extDict:(id)a3;
- (void)p_trackExceptionWithType:(id)a0 subtype:(id)a1 conversation:(id)a2 message:(id)a3 uniqueKey:(id)a4 otherParams:(id)a5;
- (id)exceptionUniqueKeyWithType:(id)a0 subtype:(id)a1 conversation:(id)a2 message:(id)a3;
- (void)trackExceptionWithType:(id)a0 subtype:(id)a1 conversation:(id)a2 message:(id)a3 otherParams:(id)a4;
- (void)trackExceptionWithType:(id)a0 subtype:(id)a1 uniqueKey:(id)a2 otherParams:(id)a3;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
