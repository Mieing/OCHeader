@class ACCGenericTemplateApplierServiceImpl;

@interface ACCEditorGenericTemplateComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCGenericTemplateApplierServiceImpl *applierService;

- (id)serviceBinding;
- (void).cxx_destruct;

@end
