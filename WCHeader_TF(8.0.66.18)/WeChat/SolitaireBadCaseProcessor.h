@interface SolitaireBadCaseProcessor : NSObject

+ (BOOL)isHitMultiSolitaire:(id)a0;
+ (void)separateMultiItemEditInOneLineWithInfo:(id)a0 Obj:(id)a1;
+ (BOOL)checkIfNeedDropLocalExistSolitaire:(id)a0 InfoObj:(id)a1;
+ (id)getNakedContent:(id)a0;
+ (BOOL)isItemCreatedFromNotBelongSelf:(id)a0 Solitaire:(id)a1;

@end
