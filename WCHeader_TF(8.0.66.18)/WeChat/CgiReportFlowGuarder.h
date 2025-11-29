@class NSString, NSMutableDictionary, NSMutableSet;

@interface CgiReportFlowGuarder : NSObject <IOnCgiReportFlowControl>

@property (retain, nonatomic) NSMutableDictionary *configMap;
@property (retain, nonatomic) NSMutableDictionary *controlData;
@property (retain, nonatomic) NSMutableSet *timerKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)readExptConfig;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onCgiFlowControl:(unsigned int)a0 andModel:(id)a1;
- (BOOL)checkToFlowControl:(unsigned int)a0 andReportData:(id)a1;
- (void)flowControl:(id)a0 andReportData:(id)a1 andConfigModel:(id)a2;
- (void)startTimer:(id)a0 andTimeSecond:(double)a1;
- (void)sizeOut:(id)a0;
- (void)startReq:(id)a0;
- (void).cxx_destruct;

@end
