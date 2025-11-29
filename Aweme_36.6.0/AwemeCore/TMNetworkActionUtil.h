@interface TMNetworkActionUtil : NSObject

+ (void)doURLEncodedBodyReplaceActionResult:(id)a0 onRequest:(id)a1;
+ (void)doJSONBodyReplaceActionResult:(id)a0 onRequest:(id)a1;
+ (void)editBody:(id)a0 withOriginValue:(id)a1 toReplaceValue:(id)a2 keyPathComponents:(id)a3 currentIdx:(unsigned long long)a4 count:(unsigned long long)a5;
+ (void)doBodyReplaceActionResult:(id)a0 onRequest:(id)a1;
+ (void)updateContextRequest:(id)a0 withQueryItems:(id)a1;
+ (void)doAddActionResult:(id)a0 onContext:(id)a1;
+ (void)doRemoveActionResult:(id)a0 onContext:(id)a1;
+ (void)doReplaceActionResult:(id)a0 onContext:(id)a1;
+ (void)doDropActionResult:(id)a0 onContext:(id)a1;
+ (void)doDecryptActionResult:(id)a0 onContext:(id)a1;
+ (void)doDecryptWholeBodyActionResult:(id)a0 onContext:(id)a1;
+ (void)doDecryptBodyFieldsActionResult:(id)a0 onContext:(id)a1;
+ (void)doFastPassActionResult:(id)a0 onContext:(id)a1;
+ (void)doSetPassThroughInfoActionResult:(id)a0 onContext:(id)a1;
+ (id)doActionResults:(id)a0 onContext:(id)a1;

@end
