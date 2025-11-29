@interface BDWebKitUtil : NSObject

+ (BOOL)checkWebContentBlank:(id)a0 withBlankColor:(id)a1;
+ (id)contentTypeOfExtension:(id)a0;
+ (id)rangeDataForVideo:(id)a0 withRequest:(id)a1 withResponseHeaders:(id)a2;
+ (BOOL)checkWebContentBlank:(id)a0 withBlankColor:(id)a1 withNonBlankRatio:(double *)a2;
+ (BOOL)_newCheckWebContentBlank:(id)a0 withBlankColor:(id)a1 withNonBlankRatio:(double *)a2;
+ (BOOL)_oldCheckWebContentBlank:(id)a0 withBlankColor:(id)a1;
+ (BOOL)_oldCheckWebContentBlankTryFixCrash:(id)a0 withBlankColor:(id)a1;
+ (BOOL)_newCheckWebContentBlank:(id)a0 withBlankColor:(id)a1;
+ (BOOL)_newCheckWebContentBlankTryFixCrash:(id)a0 withBlankColor:(id)a1;
+ (id)prefixMatchesInString:(id)a0 withPattern:(id)a1;

@end
