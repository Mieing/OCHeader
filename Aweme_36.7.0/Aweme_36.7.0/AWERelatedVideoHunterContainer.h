@class NSString, UIView;
@protocol HunterContainerProtocol;

@interface AWERelatedVideoHunterContainer : UIView <HunterContainerLifeCycleProtocol, AWELongVideoLVWidgetContainerProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadHunterWithSchama:(id)a0 awemeModel:(id)a1 widgetList:(id)a2 extraParams:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;

@end
