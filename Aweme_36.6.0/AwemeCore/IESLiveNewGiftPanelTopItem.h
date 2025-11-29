@class UIView, NSString, IESLiveNewGiftPanelContext;

@interface IESLiveNewGiftPanelTopItem : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) double delay;
@property (copy, nonatomic) id /* block */ lazyLoadBlock;
@property (nonatomic) BOOL dismissEnable;
@property (retain, nonatomic) UIView *dismissView;
@property (nonatomic) BOOL enableNewAnnieX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (id)initialData;
- (id)initWithPanelContext:(id)a0;
- (BOOL)shouldShowPersonalWealth;
- (void)loadViews:(BOOL)a0;
- (void)realLoadLynxView;
- (id)newContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)legacyContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)urlString;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
