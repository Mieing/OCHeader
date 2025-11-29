@interface LatexEngine : NSObject

+ (id)viewComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2;
+ (id)imageComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2 error:(id *)a3;
+ (void)setupParseErrorCallback:(id /* block */)a0;
+ (id)buildIconWithParam:(id)a0;
+ (struct shared_ptr<tex::TeXFormula::TeXIconBuilder> { struct TeXIconBuilder *x0; struct __shared_weak_count *x1; })buildIconBuilderWithParam:(id)a0;
+ (void)handleErrorWithContent:(id)a0 message:(const char *)a1 errorCode:(int)a2;
+ (void)handleErrorWithContent:(id)a0 message:(const char *)a1;
+ (void)setupFontBundlePath:(id)a0;
+ (BOOL)canParseLaTeX:(id)a0;
+ (id /* block */)parseErrorCallback;
+ (id)getSpeechText:(id)a0;
+ (id)viewComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2 error:(id *)a3;
+ (id)iconComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2 error:(id *)a3;
+ (id)latexViewsWithFontSize:(double)a0 params:(id)a1 icons:(id)a2;
+ (id)latexImagesWithFontSize:(double)a0 params:(id)a1 icons:(id)a2;
+ (id)iconComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2;
+ (struct vector<std::shared_ptr<tex::TeXIcon>, std::allocator<std::shared_ptr<tex::TeXIcon>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<tex::TeXIcon> *, std::allocator<std::shared_ptr<tex::TeXIcon>>> { void *x0; } x2; })parseWithLaTeX:(id)a0 fontSize:(double)a1 width:(double)a2 useFormulaSplit:(BOOL)a3 fontUseBoldType:(BOOL)a4 error:(id *)a5;
+ (id)generateErrorWithLatex:(id)a0 errorMessage:(const char *)a1 errorCode:(int)a2;
+ (void)registerIgnoredCommands:(id)a0 fakeCommands:(id)a1;
+ (id)viewComponentWithLaTeX:(id)a0 fontSize:(double)a1;
+ (id)imageComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2;
+ (id)iconComponentWithLaTeX:(id)a0 fontSize:(double)a1;
+ (void)asyncGetViewComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2 callback:(id /* block */)a3;
+ (void)asyncGetIconComponentWithLaTeX:(id)a0 fontSize:(double)a1 params:(id)a2 callback:(id /* block */)a3;
+ (id)parseQueue;
+ (void)start;
+ (void)debug:(BOOL)a0;
+ (struct shared_ptr<tex::Color_iOS> { struct Color_iOS *x0; struct __shared_weak_count *x1; })colorWithUIColor:(id)a0;

@end
