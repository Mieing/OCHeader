@class GXRenderManager, GXTemplateItem, NSDictionary, GXTemplateData, UIView, GXNode, NSPointerArray;

@interface GXTemplateContext : NSObject

@property (nonatomic) struct CGSize { double width; double height; } measureSize;
@property (retain, nonatomic) GXTemplateItem *templateItem;
@property (retain, nonatomic) GXTemplateData *templateData;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) GXNode *rootNode;
@property (retain, nonatomic) NSDictionary *templateInfo;
@property (nonatomic) BOOL isNeedLayout;
@property (retain, nonatomic) NSPointerArray *textNodes;
@property (weak, nonatomic) GXRenderManager *renderManager;

- (void).cxx_destruct;

@end
