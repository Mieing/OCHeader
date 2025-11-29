@interface APBToygerUtils : NSObject

+ (id)randomString:(long long)a0;
+ (void)APBToygerMainThread:(id /* block */)a0;
+ (id)localizedTextForKey:(id)a0;
+ (id)getTextContentforKey:(id)a0;
+ (int)getCodefrom:(id)a0 withLength:(int)a1;
+ (id)extractNumberFromText:(id)a0;
+ (BOOL)checkFileunderPath:(id)a0;
+ (BOOL)writeFileunderPath:(id)a0;
+ (BOOL)removeFileunderPath:(id)a0;
+ (id)loadImageFromBundleNamed:(id)a0;
+ (id)lastWindow;
+ (BOOL)useElemeEquipmentUI:(id)a0;
+ (BOOL)useNearFarLiveness:(id)a0;
+ (id)toygerTipsConfig;
+ (id)localizedStringForKey:(id)a0;
+ (id)getBundle;

@end
