@class UITextChecker;

@interface FlutterSpellCheckPlugin : NSObject

@property (retain, nonatomic) UITextChecker *textChecker;

- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (id)findAllSpellCheckSuggestionsForText:(id)a0 inLanguage:(id)a1;
- (id)findSpellCheckSuggestionsForText:(id)a0 inLanguage:(id)a1 startingOffset:(long long)a2;
- (void).cxx_destruct;

@end
