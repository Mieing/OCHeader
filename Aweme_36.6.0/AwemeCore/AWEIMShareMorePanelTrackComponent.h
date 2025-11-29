@class NSSet, NSMutableSet, NSString;
@protocol AWEIMSharePanelTrackIDGeneratorProtocol;

@interface AWEIMShareMorePanelTrackComponent : AWEIMComponentBase <AWEIMShareMorePanelTrackProtocol, IESIMContackPickerViewControllerLifeCylceAction>

@property (nonatomic) BOOL isFirstRendered;
@property (retain, nonatomic) NSMutableSet *showedTrackInfo;
@property (retain, nonatomic) NSSet *firstScreenRenderedTrackInfo;
@property (retain, nonatomic) id<AWEIMSharePanelTrackIDGeneratorProtocol> panelIDGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)halfScreenContainerVCDidTapContainer;
- (void)trackComponentShowWithInfo:(id)a0;
- (void)trackComponentClickWithInfo:(id)a0 exit:(BOOL)a1;
- (void)trackComponentScroll;
- (void).cxx_destruct;
- (id)selectionContext;

@end
