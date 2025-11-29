@class BDXContext, NSString, UIView, BDARifleViewConfiguration, BDXBridgeContext;
@protocol AnnieXContainerBaseProtocol, BDXKitViewProtocol;

@interface BDALokiAnnieXRifleView : BDALokiRifleView

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lokiAnnieXCardView;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (retain, nonatomic) BDARifleViewConfiguration *config;
@property (retain, nonatomic) BDXContext *context;
@property (copy, nonatomic) NSString *currentURL;
@property (retain, nonatomic) BDXBridgeContext *methodsContext;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anniexDefaultFrame;

- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)view:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)_loadAnnieXSchemaModel:(id)a0 withConfiguration:(id)a1;
- (BOOL)annieXEnableReuse;
- (void)annieXResolveAdInfo;
- (id)lokiGenerateLynxKitParamsWithSchemaModel:(id)a0 context:(id)a1 params:(id)a2 configuration:(id)a3;
- (void)_realLoadAnniexWithView:(id)a0 schemaModel:(id)a1 configuration:(id)a2 cardView:(id)a3;
- (void)annieXRegisterMethodsToView:(id)a0;
- (void)annieXRegisterLynxMethodsToView:(id)a0;
- (void)loadAnnieXURL:(id)a0 withConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
