@class YataRenderNode, UIView;
@protocol YataABSRenderDelegate, YataInstanceInnerInterface;

@interface YataABSViewHolder : NSObject

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) YataRenderNode *renderNode;
@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (nonatomic) struct CGSize { double width; double height; } fitSize;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) BOOL isAlreadyRenderSize;
@property (readonly, nonatomic) unsigned long long viewLoadType;
@property (readonly, weak, nonatomic) id<YataABSRenderDelegate> renderDelegate;

- (id)dataUpdatedSceneDescription:(unsigned long long)a0;
- (id)initWithYataInstance:(id)a0 renderNode:(id)a1;
- (void)updateWithYataInstance:(id)a0 renderNode:(id)a1;
- (void)markCurrentViewTemplateLoadType:(unsigned long long)a0;
- (void)preloadView:(struct CGSize { double x0; double x1; })a0 withCompletion:(id /* block */)a1;
- (void)createViewWithScene:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateDataWithContentView:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 scene:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
