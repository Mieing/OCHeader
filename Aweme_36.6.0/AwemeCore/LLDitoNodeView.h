@class NSString, UIView, LLDitoNode, LLDitoDecorationView;
@protocol LLDitoComponentView;

@interface LLDitoNodeView : UIView <LLDitoNodeView> {
    UIView<LLDitoComponentView> *_bizView;
    UIView *_bgView;
    LLDitoDecorationView *_decorationView;
}

@property (weak, nonatomic) LLDitoNode *node;
@property (retain, nonatomic) UIView<LLDitoComponentView> *bizView;
@property (readonly, nonatomic) UIView *bgView;
@property (readonly, nonatomic) LLDitoDecorationView *decorationView;
@property (readonly, nonatomic) LLDitoNode *inheritStyleFromThisNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
