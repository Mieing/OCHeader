@interface BDWWebViewGeckoUtil : NSObject

+ (id)geckoAccessKey;
+ (id)geckoDataForPath:(id)a0 channel:(id)a1;
+ (BOOL)hasCacheForPath:(id)a0 channel:(id)a1;
+ (void)updateGeckoAccessKey:(id)a0;
+ (id)geckoSettingDict;
+ (id)geckoVersionForChannel:(id)a0;

@end
