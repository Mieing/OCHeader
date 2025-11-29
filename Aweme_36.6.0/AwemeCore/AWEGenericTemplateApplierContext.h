@class NPGenericTemplateService_OC;
@protocol IESServiceProvider;

@interface AWEGenericTemplateApplierContext : NSObject

@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) NPGenericTemplateService_OC *presetService;

- (void).cxx_destruct;

@end
