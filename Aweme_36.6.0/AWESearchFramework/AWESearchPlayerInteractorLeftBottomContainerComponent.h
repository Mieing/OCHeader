@class AWESearchEventDispather, NSString, NSDictionary, AWESearchPlayerInteractorLeftBottomContainerComponentModel, UIView;
@protocol AWESearchTextExtractionComponentProvider, AWESearchComponentProtocol, AWESearchUserAvatarComponentProvider, AWESearchLikeComponentProvider, AWESearchTextComponentProvider, AWESearchAIAbstractComponentProtocol, AWESearchContainerProtocol;

@interface AWESearchPlayerInteractorLeftBottomContainerComponent : AWESearchComponent <AWESearchPlayerInteractorLeftBottomContainerComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchPlayerInteractorLeftBottomContainerComponentModel *leftBottomModel;
@property (retain, nonatomic) id<AWESearchLikeComponentProvider> likeComponent;
@property (retain, nonatomic) id<AWESearchUserAvatarComponentProvider> userAvatarComponent;
@property (retain, nonatomic) id<AWESearchTextComponentProvider> textComponent;
@property (retain, nonatomic) id<AWESearchTextExtractionComponentProvider> textExtractionComponent;
@property (retain, nonatomic) id<AWESearchAIAbstractComponentProtocol> aiAbstractComponent;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)getCreatSubComponentsArrayWithModel:(id)a0;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)p_loadComponent;
- (void).cxx_destruct;
- (id)componentView;

@end
