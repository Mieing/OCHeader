@class NSString, BDARLynxContainerView, NSDictionary;

@interface BDARGenericCardView : UIView <BDARLynxContainerViewDelegate, BDARGenericCardViewProtocol>

@property (retain, nonatomic) BDARLynxContainerView *lynxContainerView;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSDictionary *mpParams;
@property (copy, nonatomic) NSDictionary *queryExtra;
@property (copy, nonatomic) NSDictionary *lynxExtra;
@property (copy, nonatomic) NSDictionary *colorTheme;
@property (nonatomic) long long ritIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAvailable;

- (void)unsubscribeEvent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rit:(long long)a1 creatorID:(id)a2 adFrom:(id)a3 mpParams:(id)a4 queryExtra:(id)a5 lynxExtra:(id)a6 colorTheme:(id)a7;
- (void)relayoutContent;
- (void)loadAdDataCompletion:(id /* block */)a0;
- (void)refreshColorTheme:(id)a0;
- (id)templateExtraData;
- (void)lynxContainer:(id)a0 willStartLoad:(id)a1;
- (void)lynxContainer:(id)a0 didFinishLoad:(BOOL)a1 error:(id)a2;
- (void)lynxContainer:(id)a0 didJSRuntimeReady:(id)a1;
- (void)lynxContainer:(id)a0 didClickJumpWithParams:(id)a1;
- (void)lynxContainer:(id)a0 didClickCloseWithParams:(id)a1;
- (void)lynxContainer:(id)a0 didContentSizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)subscribeEventWithHandler:(id /* block */)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)viewDidDisappear;

@end
