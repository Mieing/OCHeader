@class NSString, UIView;
@protocol AWEIMEmoticonPanelBoxView;

@interface AWEIMEmoticonPanelBoxComponent : AWEIMComponentBase <AWEIMEmoticonPanelBoxComponent, AWEIMEmoticonHasBackgroundImageComponent>

@property (retain, nonatomic) UIView<AWEIMEmoticonPanelBoxView> *boxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)componentDidMounted:(id)a0;
- (id)horizontalCollectionGestureRecognizers;
- (void)verticalAlignmentCenter:(BOOL)a0 boxView:(id)a1;
- (void).cxx_destruct;

@end
