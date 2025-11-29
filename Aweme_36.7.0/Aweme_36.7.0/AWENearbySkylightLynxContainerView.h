@class NSString, NSMutableArray;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkylightLynxContainerView : UIView <AWENearbyLynxContainerViewDelegate, AWENearbySkyLightElementViewProtocol>

@property (retain, nonatomic) NSMutableArray *lynxViews;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;

- (id)initWithPageType:(long long)a0;
- (void)__setupObserver;
- (void)lynxContainer:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxContainer:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)lynxContainerDidUpdate:(id)a0;
- (void)trackShowAnimated:(BOOL)a0 params:(id)a1;
- (unsigned long long)elementViewType;
- (void)setData:(id)a0 withLynxViewsBlk:(id /* block */)a1;
- (void)trackShowAnimated:(BOOL)a0 incrementalLynxViews:(id)a1 params:(id)a2;
- (id)getLynxViews;
- (void)onRecieveFavoriteDotNotification:(id)a0;
- (void)updateWithData:(id)a0 response:(id)a1 withLynxViewsBlk:(id /* block */)a2;
- (void)updateLynxViewHeight:(double)a0 cardType:(long long)a1;
- (void)sendLynxEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
