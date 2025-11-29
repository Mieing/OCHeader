@class NSString, DitoNode, UIView, DitoDecorationView;
@protocol DitoComponentView;

@interface DitoNodeView : UIView <DitoNodeView> {
    UIView<DitoComponentView> *_bizView;
    UIView *_bgView;
    DitoDecorationView *_decorationView;
}

@property (weak, nonatomic) DitoNode *node;
@property (retain, nonatomic) UIView<DitoComponentView> *bizView;
@property (readonly, nonatomic) UIView *bgView;
@property (readonly, nonatomic) DitoDecorationView *decorationView;
@property (readonly, nonatomic) DitoNode *inheritStyleFromThisNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
