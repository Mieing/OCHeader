@interface BDASplashCommonRenderViewModel : BDASplashComplianceBaseViewModel

+ (void)downloadRenderResourceWithComplianceArea:(id)a0;
+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (long long)getModelType;

@end
