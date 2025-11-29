@class NSString;

@interface AWEDemaciaPlayerModuleService : HTSService <AWEDemaciaPlayerModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)settingTypeView;
- (Class)settingTypeViewClass;
- (Class)demaciaPlayerViewClass;
- (Class)noxusPlayerViewClass;
- (Class)demaciaModelTransferUtil;
- (id)noxusPlayerInfoRecorder;
- (id)demaciaPlayerImageNamed:(id)a0;
- (id)generalPlayerWithConfig:(id)a0 logExtraDict:(id)a1;
- (id)demaciaPlayerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initModel:(id)a1;
- (id)noxusPlayerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initModel:(id)a1;

@end
