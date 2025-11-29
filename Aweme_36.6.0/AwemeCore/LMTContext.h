@class UIView, LMTAnnieView, NSString, LMTPageStructureModel, LMTViewController, LMTRouterQueryModel, NSMutableArray, LMTWebView;

@interface LMTContext : NSObject <LMTAnnieViewDelegate>

@property (retain, nonatomic) LMTAnnieView *footerNode;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) LMTRouterQueryModel *queryModel;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) LMTViewController *vc;
@property (retain, nonatomic) LMTPageStructureModel *pageStructureModel;
@property (retain, nonatomic) LMTWebView *footerView;
@property (retain, nonatomic) NSMutableArray *bodyNodeArr;
@property (retain, nonatomic) LMTAnnieView *anchorNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)switchTabWithTag:(id)a0;
- (BOOL)switchTabWithIndex:(long long)a0;
- (void)layoutWithModel:(id)a0;
- (BOOL)isAnchorUrlEqualNodeModel:(id)a0;
- (id)bodyNodeArr;
- (void)broadcastAllNodeWithEvent:(id)a0 params:(id)a1;
- (void)addAnchorPageWithSchema:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;

@end
