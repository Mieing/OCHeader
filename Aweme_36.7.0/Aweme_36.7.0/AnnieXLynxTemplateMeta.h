@class NSData, LynxTemplateBundle, BDXBridgeLynxSignVerifier;

@interface AnnieXLynxTemplateMeta : NSObject

@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (retain, nonatomic) NSData *templateData;
@property (retain, nonatomic) BDXBridgeLynxSignVerifier *lynxSignVerifier;

- (id)initWithBundleAndData:(id)a0 templateData:(id)a1;
- (id)initWithBundleAndData:(id)a0 templateData:(id)a1 lynxSignVerifier:(id)a2;
- (void).cxx_destruct;

@end
