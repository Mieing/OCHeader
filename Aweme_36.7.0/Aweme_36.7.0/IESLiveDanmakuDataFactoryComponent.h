@class IESLiveDanmakuNodeFactory, IESEZDanmakuContext, NSString, IESLiveDanmakuMonitor;

@interface IESLiveDanmakuDataFactoryComponent : NSObject <IESLiveDanmakuNodeFactoryDelegate, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) IESLiveDanmakuNodeFactory *nodeFactory;
@property (retain, nonatomic) IESLiveDanmakuMonitor *danmakuMonitor;
@property (copy, nonatomic) id /* block */ danmakuDataCreated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (void)didSetAttachingDIContext;
- (void)prepareStart;
- (void)danmakuNodeFactory:(id)a0 createdFailed:(id)a1;
- (void)danmakuNodeFactory:(id)a0 filtered:(id)a1;
- (void)danmakuNodeFactory:(id)a0 didCreatedData:(id)a1;
- (void)createDanmakuDataWithMetaData:(id)a0 withPreferredStrategyClass:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
