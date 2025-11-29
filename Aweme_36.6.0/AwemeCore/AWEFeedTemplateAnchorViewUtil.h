@interface AWEFeedTemplateAnchorViewUtil : NSObject

+ (id)createAnchorLabelWithFont:(id)a0 color:(id)a1;
+ (void)configLabel:(id)a0 withTextStyleModel:(id)a1;
+ (id)getPreSeparator:(id)a0 defaultPreSeparator:(id)a1;
+ (double)getLabelWidth:(id)a0;
+ (BOOL)applyTextTruncationIfNeededForLabel:(id)a0 maxWidth:(double)a1;
+ (id)colorWithArgbColorStr:(id)a0;
+ (double)maxFontSizeForAnchorTemplateView;
+ (id)truncatedTextForLabel:(id)a0 withMaxWidth:(double)a1;
+ (id)createAnchorLabelWithFont:(id)a0 colorNamed:(id)a1;
+ (void)configLabel:(id)a0 withTextInfoModel:(id)a1;
+ (void)configView:(id)a0 withTextInfoModel:(id)a1;
+ (void)updateDataSource:(id)a0 withTextInfoModelType:(unsigned long long)a1 newContent:(id)a2;

@end
