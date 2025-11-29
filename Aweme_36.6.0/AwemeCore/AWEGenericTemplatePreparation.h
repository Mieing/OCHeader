@class NSArray, AWEGenericTemplateApplierContext;

@interface AWEGenericTemplatePreparation : NSObject

@property (retain, nonatomic) AWEGenericTemplateApplierContext *context;
@property (copy, nonatomic) NSArray *middlewares;

- (void)processTemplate:(id)a0 applyConfig:(id)a1 completion:(id /* block */)a2;
- (id)initWithContext:(id)a0 middleWares:(id)a1;
- (void)processTemplate:(id)a0 applyConfig:(id)a1 index:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
