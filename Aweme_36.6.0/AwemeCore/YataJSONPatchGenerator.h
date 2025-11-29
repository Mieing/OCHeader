@class NSMutableArray;

@interface YataJSONPatchGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *unchangedItems;
@property (retain, nonatomic) NSMutableArray *changeOperations;

+ (id)generatePatchWithSourceElement:(id)a0 targetElement:(id)a1;

- (void)computeUnchanged:(id)a0 sourceElement:(id)a1 targetElement:(id)a2;
- (void)generateDiffs:(id)a0 sourceElement:(id)a1 targetElement:(id)a2;
- (id)JSONPatchOperations;
- (void)computeObjectUnchanged:(id)a0 sourceDict:(id)a1 targetDict:(id)a2;
- (void)computeArrayUnchanged:(id)a0 sourceArray:(id)a1 targetArray:(id)a2;
- (void)replaceOldElement:(id)a0 newElement:(id)a1 path:(id)a2;
- (void)generateObjectDiffs:(id)a0 sourceDict:(id)a1 targetDict:(id)a2;
- (void)generateArrayDiffs:(id)a0 sourceArray:(id)a1 targetArray:(id)a2;
- (void)removeOldElement:(id)a0 path:(id)a1;
- (void)addElement:(id)a0 toPath:(id)a1;
- (long long)findPreviouslyRemoved:(id)a0;
- (id)findUnchangedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
