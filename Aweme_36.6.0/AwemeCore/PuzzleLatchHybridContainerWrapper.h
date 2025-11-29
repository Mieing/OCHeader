@class PuzzleLatchParamModel, NSString, NSMutableSet, NSDictionary, PuzzleLatchBridgeExcutor;
@protocol IESLatchLynxBridgeExcutorProtocol;

@interface PuzzleLatchHybridContainerWrapper : NSObject <IESLatchHybridContainerProtocol>

@property (retain, nonatomic) PuzzleLatchParamModel *model;
@property (retain, nonatomic) PuzzleLatchBridgeExcutor *excutor;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (nonatomic) BOOL preferNativePrefetch;
@property (readonly, copy, nonatomic) NSString *businessID;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, copy, nonatomic) NSString *lynxContainerID;
@property (readonly, copy, nonatomic) NSString *latchID;
@property (readonly, copy, nonatomic) NSDictionary *globalProps;
@property (readonly, copy, nonatomic) NSDictionary *initalProps;
@property (readonly, copy, nonatomic) NSDictionary *routerParam;
@property (readonly, weak, nonatomic) id lynxView;
@property (readonly, nonatomic) id<IESLatchLynxBridgeExcutorProtocol> bridgeExcutor;
@property (readonly, nonatomic) double startTimeStamp;
@property (readonly, nonatomic) double latchStartTimeStamp;
@property (nonatomic) unsigned long long prefetchFrom;
@property (nonatomic) BOOL enableCheckVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJSEvent:(id)a0 withParams:(id)a1;
- (id)initWithLatchModel:(id)a0;
- (id)container;
- (void).cxx_destruct;
- (id)currentModel;

@end
