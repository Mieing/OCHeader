@interface BDXLynxKitUtils : NSObject

+ (BOOL)isRelativeURL:(id)a0;
+ (BOOL)isResourceLoaderNotHandleURL:(id)a0;
+ (SEL)generateLoadTemplateWithBundleSEL:(id)a0 view:(id)a1;
+ (SEL)generateLoadTemplateSEL:(id)a0 view:(id)a1;
+ (SEL)generateUpdateTemplateSEL:(id)a0 view:(id)a1;
+ (BOOL)updateTemplateData:(id)a0 globalProps:(id)a1 error:(id *)a2;
+ (id)paramsGlobalProps:(id)a0;
+ (id)lynxSignVerifierWithResponse:(id)a0 originURL:(id)a1 containerName:(id)a2 bid:(id)a3 aid:(id)a4 enterFrom:(id)a5;

@end
