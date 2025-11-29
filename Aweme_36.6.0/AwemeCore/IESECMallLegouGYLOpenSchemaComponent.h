@class NSSet, NSString;
@protocol IESECMallContextProtocol;

@interface IESECMallLegouGYLOpenSchemaComponent : NSObject <IESECMallComponentProtocol>

@property (weak, nonatomic) id<IESECMallContextProtocol> mallContext;
@property (retain, nonatomic) NSSet *pageNames;
@property (retain, nonatomic) NSSet *cardScenes;
@property (retain, nonatomic) NSString *ceilingScene;
@property (nonatomic) BOOL shouldCeiling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)subscribeEvents;
- (id)initWithConfigDic:(id)a0;
- (void)trackGYLListCeiling;
- (void)jumpToScene:(id)a0 outSchema:(id)a1;
- (void)mallReportTrackerNative:(id)a0;
- (void)updateShouldCeilingStatusWithScene:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
