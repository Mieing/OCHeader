@interface SolitaireUtil : NSObject

+ (BOOL)isSolitaireAppMsg:(id)a0;
+ (BOOL)isTextOrSolitaireMsg:(id)a0;
+ (id)getCommonTextView;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithContent:(id)a0;
+ (id)getSolitaireOccupyName;

@end
