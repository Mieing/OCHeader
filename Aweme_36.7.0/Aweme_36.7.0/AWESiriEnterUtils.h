@interface AWESiriEnterUtils : NSObject

+ (BOOL)isSiriSuggestEnter:(id)a0;
+ (id)getUrlStringForSiriSuggest:(id)a0;
+ (id)parseUserActivity:(id)a0;
+ (id /* block */)reportSiriClick:(id)a0 urlString:(id)a1;
+ (id)getIntentModel:(id)a0;
+ (BOOL)isSiriShortcutEnter:(id)a0;

@end
