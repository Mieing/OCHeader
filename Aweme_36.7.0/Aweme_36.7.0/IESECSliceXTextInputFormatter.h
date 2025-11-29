@interface IESECSliceXTextInputFormatter : NSObject

+ (id)formattedStringWithFormat:(id)a0 inputString:(id)a1;
+ (void)selectTextForInput:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)originalStringWithFormat:(id)a0 inputString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })originalRangeWithFormat:(id)a0 formattedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })cursorRangeWithReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 stringLength:(unsigned long long)a1;
+ (long long)numberSignCountWithFormat:(id)a0;
+ (id)removeAllSeperatorsWithFormat:(id)a0 inputString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })cursorRangeWithFormat:(id)a0 originCursorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 formattedResult:(id)a2;
+ (id)p_nonEscapeFormatStringWithFormat:(id)a0;
+ (id)p_recoverFormattedResultByRemovingMagicSign:(id)a0;

@end
