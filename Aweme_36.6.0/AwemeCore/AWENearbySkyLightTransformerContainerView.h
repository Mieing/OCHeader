@class NSString, AWETransformerRootView, NSArray;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkyLightTransformerContainerView : UIView <AWETransformerRootViewDelegate, AWENearbyLynxCardEventHandlerProtocol, AWENearbySkyLightElementViewProtocol, AWENearbyTransformerContainerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWETransformerRootView *rootElementView;
@property (readonly, nonatomic) long long pageType;
@property (copy, nonatomic) NSArray *cardList;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWETransformerRootView *rootElementView;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)findViewWithName:(id)a0;
- (void)handleLynxViewsShow:(id)a0 params:(id)a1;
- (void)handleLynxViewsHidden:(id)a0 params:(id)a1;
- (void)updateGloabalContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)trackShowAnimated:(BOOL)a0 params:(id)a1;
- (void)trackSkylightHidden;
- (id)allLynxViews;
- (id)lynxViewWithCardType:(long long)a0;
- (void)setData:(id)a0 extraParams:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageType:(long long)a1;
- (unsigned long long)elementViewType;
- (void)setData:(id)a0 withLynxViewsBlk:(id /* block */)a1;
- (void)trackShowAnimated:(BOOL)a0 incrementalLynxViews:(id)a1 params:(id)a2;
- (id)getLynxViews;
- (void)updateWithData:(id)a0 response:(id)a1 withLynxViewsBlk:(id /* block */)a2;
- (void)sendLynxEvent:(id)a0 params:(id)a1;
- (void)didLoadTransformerRootView:(id)a0 isSuccess:(BOOL)a1;
- (id)tempoViewWithCardType:(long long)a0;
- (void)sendTempoEvent:(id)a0 params:(id)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
