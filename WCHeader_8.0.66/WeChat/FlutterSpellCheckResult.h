@class NSArray;

@interface FlutterSpellCheckResult : NSObject

@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } misspelledRange;

- (id)initWithMisspelledRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 suggestions:(id)a1;
- (id)toDictionary;
- (void).cxx_destruct;

@end
