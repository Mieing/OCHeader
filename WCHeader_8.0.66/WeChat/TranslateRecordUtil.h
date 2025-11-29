@interface TranslateRecordUtil : MMObject

+ (BOOL)couldTranslateRecordItem:(id)a0;
+ (BOOL)canShowTranslateViewWithRecordItem:(id)a0;
+ (BOOL)canShowTranslateMenuItemWithRecordItem:(id)a0;
+ (BOOL)canShowTranslatedTextWithRecordItem:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateTranslatedTextSizeWithRecordItem:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateTranslatedTextSizeWithRecordText:(id)a0;

@end
