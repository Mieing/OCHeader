@class NSString, UIViewController, NSMutableDictionary;
@protocol IESECSchemaModel;

@interface IESECStartupFlowController : NSObject <IESECStartupFlowController>

@property (retain, nonatomic) id<IESECSchemaModel> schemaModel;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (copy, nonatomic) id /* block */ startupFlowCompletion;
@property (retain, nonatomic) NSMutableDictionary *chainPointMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordTimestamp:(id)a0;
- (void)executeStartWithSchema:(id)a0 entranceInfoScene:(id)a1;
- (void)appendParamsToSchema;
- (void)doRealOpen;
- (id)parseWithSchema:(id)a0 entranceInfoScene:(id)a1;
- (id)parseWithSchemaParams:(id)a0 entranceInfoScene:(id)a1;
- (id)initWithSchemModel:(id)a0;
- (void)openDirectlyWithSchema:(id)a0 entranceInfoScene:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void)openDirectlyWithSchemaParams:(id)a0 entranceInfoScene:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
