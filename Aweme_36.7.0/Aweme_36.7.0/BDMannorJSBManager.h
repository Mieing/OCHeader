@class NSString, BDMannorStyleTemplateModel, BDMannorAdDataModel, BDMannorComponentManagerContext;
@protocol BDMannorJSBManagerDelegate;

@interface BDMannorJSBManager : NSObject <BDMannorJSBManagerProtocol>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) BDMannorAdDataModel *adData;
@property (retain, nonatomic) BDMannorStyleTemplateModel *styleTemplate;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (weak, nonatomic) id<BDMannorJSBManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith:(id)a0 componentType:(id)a1 logExtra:(id)a2 adData:(id)a3 styleTemplate:(id)a4 delegate:(id)a5 componentManagerContext:(id)a6;
- (void).cxx_destruct;
- (void)dealloc;

@end
