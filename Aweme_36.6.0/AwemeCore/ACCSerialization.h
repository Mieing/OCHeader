@interface ACCSerialization : NSObject

+ (id)restoreFromObj:(id)a0 to:(Class)a1;
+ (id)transformOriginalObj:(id)a0 to:(Class)a1;
+ (id)transformOriginalObjArray:(id)a0 to:(Class)a1;
+ (id)restoreFromObjArray:(id)a0 to:(Class)a1;

@end
