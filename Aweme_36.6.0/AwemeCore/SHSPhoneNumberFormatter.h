@class NSString, SHSPhoneTextField, NSMutableDictionary;

@interface SHSPhoneNumberFormatter : NSFormatter {
    NSMutableDictionary *config;
}

@property BOOL canAffectLeftViewByFormatter;
@property (copy, nonatomic) NSString *prefix;
@property (weak) SHSPhoneTextField *textField;

+ (id)formattedRemove:(id)a0 AtIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (long long)valuableCharCountIn:(id)a0;
+ (BOOL)isValuableChar:(unsigned short)a0;
+ (id)digitOnlyString:(id)a0;

- (void)setDefaultOutputPattern:(id)a0;
- (id)valuesForString:(id)a0;
- (id)getDefaultOutputPattern;
- (void)resetFormats;
- (id)stringWithoutFormat:(id)a0;
- (id)configForSequence:(id)a0;
- (id)applyFormat:(id)a0 forFormattedString:(id)a1;
- (BOOL)isRequireSubstitute:(unsigned short)a0;
- (BOOL)matchString:(id)a0 withPattern:(id)a1;
- (id)digitOnlyString:(id)a0;
- (id)defaultPattern;
- (void)addOutputPattern:(id)a0 forRegExp:(id)a1 imagePath:(id)a2;
- (void)resetDefaultFormat;
- (void)setDefaultOutputPattern:(id)a0 imagePath:(id)a1;
- (void)addOutputPattern:(id)a0 forRegExp:(id)a1;
- (void)setOutputPatternsFromArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)resetConfig;

@end
