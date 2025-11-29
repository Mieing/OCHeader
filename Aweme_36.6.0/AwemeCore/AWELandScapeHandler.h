@interface AWELandScapeHandler : NSObject

+ (BOOL)useNewTransition;
+ (BOOL)canShowLandScapeEntryWithModel:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcuteVideoRealFrame:(id)a0 model:(id)a1 referString:(id)a2;
+ (BOOL)shouldAvoidOverlapWithPlayer:(id)a0 model:(id)a1;
+ (double)calcuteLandscapeEntryViewTopOffset:(id)a0 model:(id)a1 referString:(id)a2;
+ (void)enterLandSacpeVideoControllerWithPlayer:(id)a0 contextConfigInfo:(id)a1 landScapeDelegate:(id)a2 transitioningDelegate:(id)a3 configBeforeEnterBlock:(id /* block */)a4 configAfterEnterBlock:(id /* block */)a5;
+ (id)configLandScapeContextWithInfo:(id)a0;

@end
