@class NSString, SECNetDetectEvent;
@protocol SECNetTrafficProtocol;

@interface SECNetTessaDataWorker : NSObject <SECDataWorker>

@property (retain, nonatomic) id<SECNetTrafficProtocol> netTraffic;
@property (retain, nonatomic) SECNetDetectEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classifyTasks;
- (void)consumeEventWithExtraInfo:(id)a0;
- (void)markRouterTessaFromLog:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)extraInfo;

@end
