@class NSString, NSMutableDictionary, IESEZDanmakuContext;

@interface IESEZDanmakuDockingStation : NSObject <IESEZDanmakuClockRefreshProtocol, IESEZDanmakuControlProtocol, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSMutableDictionary *businessComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (void)prepareStart;
- (id)getExpandComponentInstanceWithType:(id)a0;
- (void)updateWithTime:(double)a0;
- (void)loadExpandComponentsWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;

@end
