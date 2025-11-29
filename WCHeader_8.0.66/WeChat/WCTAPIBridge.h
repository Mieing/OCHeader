@interface WCTAPIBridge : NSObject

+ (BOOL)createTable:(id)a0 withClass:(Class)a1 withHandle:(struct CPPHandle { struct CPPObject *x0; })a2;
+ (BOOL)createVirtualTable:(id)a0 withClass:(Class)a1 withHandle:(struct CPPHandle { struct CPPObject *x0; })a2;
+ (BOOL)insertObjects:(id)a0 intoTable:(id)a1 withProperties:(id)a2 orReplace:(BOOL)a3 orIgnore:(BOOL)a4 withHandle:(struct CPPHandle { struct CPPObject *x0; })a5;
+ (void)bindProperties:(id)a0 ofObject:(id)a1 withHandleStatement:(struct CPPHandleStatement { struct CPPObject *x0; })a2;
+ (void)bindProperty:(id)a0 ofObject:(id)a1 toIndex:(int)a2 withHandleStatement:(struct CPPHandleStatement { struct CPPObject *x0; })a3;
+ (id)extractObjectOnResultColumns:(id)a0 fromHandleStatement:(struct CPPHandleStatement { struct CPPObject *x0; })a1;
+ (id)extractMultiObjectOnResultColumns:(id)a0 fromHandleStatement:(struct CPPHandleStatement { struct CPPObject *x0; })a1;
+ (void)configDefaultSymbolDetectorAndUnicodeNormalizer;
+ (void)configPinyinDict:(id)a0;
+ (void)configTraditionalChineseDict:(id)a0;

@end
