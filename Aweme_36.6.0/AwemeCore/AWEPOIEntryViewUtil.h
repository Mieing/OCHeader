@interface AWEPOIEntryViewUtil : NSObject

+ (double)stringWidthWithString:(id)a0 type:(unsigned long long)a1 scene:(long long)a2 layout:(id)a3;
+ (id)itemFontWithItemType:(unsigned long long)a0 entryViewScene:(long long)a1 entryViewLayout:(id)a2;
+ (id)itemColorWithItemType:(unsigned long long)a0 entryViewScene:(long long)a1 isBGColorWhite:(BOOL)a2 entryViewLayout:(id)a3;
+ (double)entryViewHeightWithEntryViewLayout:(id)a0 shouldShowDetail:(BOOL)a1;
+ (BOOL)shouldAddSeparatorLineWithItemStyle:(unsigned long long)a0;
+ (id)separatorLineColorWithEntryViewScene:(long long)a0 layout:(id)a1 isBGColorWhite:(BOOL)a2;
+ (id)itemFontWithSize:(long long)a0 entryViewScene:(long long)a1;
+ (id)itemColorWithHexString:(id)a0 defaultColor:(id)a1;
+ (double)itemHeightWithItemType:(unsigned long long)a0 entryViewScene:(long long)a1 entryViewLayout:(id)a2;
+ (id)grayLabelBackgroundColorWithEntryViewScene:(long long)a0 isBGColorWhite:(BOOL)a1;
+ (id)grayLabelTextColorWithEntryViewScene:(long long)a0 isBGColorWhite:(BOOL)a1;
+ (id)grayLabelFontWithItemType:(unsigned long long)a0 entryViewScene:(long long)a1 entryViewLayout:(id)a2;
+ (double)p_stringWidthWithString:(id)a0 height:(double)a1 font:(id)a2;
+ (double)stringWidthWithString:(id)a0 style:(unsigned long long)a1 type:(unsigned long long)a2 scene:(long long)a3 textSize:(double)a4 layout:(id)a5;
+ (double)stringWidthWithString:(id)a0 type:(unsigned long long)a1 scene:(long long)a2 textSize:(double)a3 layout:(id)a4;
+ (id)itemFontWithItemType:(unsigned long long)a0 entryViewScene:(long long)a1 textSize:(long long)a2 entryViewLayout:(id)a3;

@end
