@class NSString, NSDictionary;
@protocol AnnieXContainerBaseProtocol, IESLatchLynxBridgeExcutorProtocol;

@interface AnnieLatchData : NSObject <IESLatchHybridContainerProtocol>

@property (copy, nonatomic) NSString *latchID;
@property (weak, nonatomic) id<AnnieXContainerBaseProtocol> container;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *initialProps;
@property (retain, nonatomic) id<IESLatchLynxBridgeExcutorProtocol> bridgeExcutor;
@property (nonatomic) BOOL preferNativePrefetch;
@property (nonatomic) double latchStartTimeStamp;
@property (copy, nonatomic) NSDictionary *routerParamQueryItems;
@property (nonatomic) BOOL isAnnieXCard;
@property (copy, nonatomic) NSString *lynxContainerID;
@property (readonly, copy, nonatomic) NSString *businessID;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, copy, nonatomic) NSDictionary *initalProps;
@property (readonly, copy, nonatomic) NSDictionary *routerParam;
@property (readonly, weak, nonatomic) id lynxView;
@property (readonly, nonatomic) double startTimeStamp;
@property (nonatomic) unsigned long long prefetchFrom;
@property (nonatomic) BOOL enableCheckVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainer:(id)a0 kitView:(id)a1;
- (id)initWithContainer:(id)a0 kitView:(id)a1 routerParam:(id)a2 initialData:(id)a3 isAnnieXCard:(BOOL)a4;
- (void)invokeJSEvent:(id)a0 withParams:(id)a1;
- (id)getContainerSessionID;
- (id)getForestSessionID;
- (void).cxx_destruct;
- (id)context;

@end
