@interface AWEIMSkylightCellRender : NSObject

- (void)layoutPresenters:(id)a0 inCell:(id)a1 targetPresenter:(id)a2;
- (id)p_findOrBuildViewForPresenter:(id)a0 inCell:(id)a1;
- (void)p_insertView:(id)a0 toSuperView:(id)a1;
- (void)p_clearDirtyViewsInCell:(id)a0 displayingViews:(id)a1;
- (void)renderViewModel:(id)a0 inCell:(id)a1;

@end
