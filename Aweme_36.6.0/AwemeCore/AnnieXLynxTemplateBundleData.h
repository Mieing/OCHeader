@class BDXBridgeLynxSignVerifier, LynxTemplateBundle, NSString;

@interface AnnieXLynxTemplateBundleData : NSObject <IESForestPostProcessedDataProtocol>

@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) BDXBridgeLynxSignVerifier *lynxSignVerifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTemplateBundle:(id)a0 length:(unsigned long long)a1 lynxSignVerifier:(id)a2;
- (id)initWithTemplateBundle:(id)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)extra;
- (id)data;

@end
