@interface FlowMarkdownAdapter : NSObject

+ (id)imageComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2 onError:(id /* block */)a3;
+ (id)viewComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2;
+ (void)setupParseErrorCallback:(id /* block */)a0;
+ (int)getIconDepth:(id)a0;

@end
