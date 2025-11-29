@class NSString;

@interface PhoneNumberFormatInfo : MMObject

@property (retain, nonatomic) NSString *leadingDigitsRegex;
@property (retain, nonatomic) NSString *pattern;
@property (retain, nonatomic) NSString *formatRegex;

- (id)init;
- (void).cxx_destruct;

@end
