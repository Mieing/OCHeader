@class AWENearbyLynxContainerView, NSString;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkyLightMoveGuideIconSloganView : UIView <AWENearbyLynxContainerViewDelegate, AWENearbySkyLightElementViewProtocol>

@property (retain, nonatomic) AWENearbyLynxContainerView *lynxContainerView;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxContainerDidFirstScreen:(id)a0;
- (void)lynxContainer:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxContainer:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)trackShowAnimated:(BOOL)a0 params:(id)a1;
- (void)trackSkylightHidden;
- (unsigned long long)elementViewType;
- (void)configWithGuideModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
