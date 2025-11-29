@class NSString, NSMutableDictionary, AWETeenPhoneTextField;

@interface AWETeenPhoneNumberFormatter : NSFormatter {
    NSMutableDictionary *config;
}

@property (copy, nonatomic) NSString *prefix;
@property (weak, nonatomic) AWETeenPhoneTextField *textField;
@property (nonatomic) BOOL canAffectLeftViewByFormatter;

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
- (void).cxx_destruct;
- (id)init;
- (id)resetConfig;

@end
