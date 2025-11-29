@interface SolitaireExtracter : NSObject

+ (id)getSolitaireHeaderWithText:(id)a0 HasHeader:(BOOL *)a1 Separator:(id *)a2;
+ (id)getSolitaireInfoWithKeywordWithText:(id)a0;
+ (id)getSolitaireInfoWithText:(id)a0;
+ (id)getSolitaireTailWithText:(id)a0;
+ (void)extractSolitaireExampleWithText:(id)a0 Header:(id *)a1 Example:(id *)a2;
+ (id)extractSolitaireContent:(id)a0 SolitaireHeader:(id)a1 SolitaireTail:(id)a2;
+ (id)getSubStringWithContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)extractSolitaireInfoWithAppmsg:(id)a0;
+ (id)getArrSolitaireContentWithText:(id)a0;
+ (id)getArrSolitaireContentWithText:(id)a0 ForFirstItem:(BOOL)a1;
+ (id)getArrSolitaireContentWithText:(id)a0 Operation:(id)a1 EmptyLineCount:(unsigned int *)a2 ForFirstItem:(BOOL)a3;

@end
