@class IRISDataModelContext;

@interface IRISDataModelUIParser : NSObject

@property (weak, nonatomic) IRISDataModelContext *context;

+ (id)parserWithContext:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowFrame;

- (BOOL)isElementVisible:(id)a0;
- (id)parseViewElement:(id)a0 options:(id)a1;
- (id)parsePageElement:(id)a0 options:(id)a1;
- (id)_parseIdentifierForPage:(id)a0;
- (id)_parseClassFor:(id)a0 withRandSuffix:(BOOL)a1;
- (id)blockListForPath;
- (id)_parseIdentifierForElement:(id)a0;
- (unsigned long long)_viewIndexFor:(id)a0;
- (id)_parsePathNode:(id)a0;
- (BOOL)isInheritBasicView:(id)a0;
- (void)_enumerateResponderChain:(id)a0 usingBlock:(id /* block */)a1;
- (id)parseViewElement:(id)a0 pageInChain:(id *)a1 options:(id)a2;
- (void)_parseElementPaths:(id)a0 usingBlock:(id /* block */)a1;
- (id)_parseTextForView:(id)a0;
- (id)_parsePositionFor:(id)a0;
- (BOOL)isIgnoreView:(id)a0;
- (id)exportViewHierarchy:(id)a0;
- (id)excute:(id)a0 performSelector:(SEL)a1 withParam:(id)a2;
- (id)parsePageIdFor:(id)a0;
- (id)parseClassIdFor:(id)a0;
- (id)base64EncodeForImage:(id)a0;
- (id)captureHierarchy:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_indexPathForCell:(id)a0;
- (id)snapshotForView:(id)a0;

@end
