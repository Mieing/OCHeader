@interface ACCImageToColorUtil : NSObject

+ (id)gradientColorWithImage:(id)a0;
+ (void)updateCanvasStyle:(id)a0 upperColor:(id)a1 downColor:(id)a2;
+ (void)updateGradienLayer:(id)a0 upperColor:(id)a1 downColor:(id)a2;
+ (id)colorWithUpperColor:(id)a0 downColor:(id)a1;
+ (id)modelForKey:(id)a0;
+ (id)adjustColor:(id)a0 config:(id)a1;
+ (double)adjustValue:(double)a0 min:(double)a1 max:(double)a2 ratio:(double)a3;
+ (void)saveModel:(id)a0 forKey:(id)a1;
+ (void)upgradeColorWithNLE:(id)a0 publishModel:(id)a1;
+ (id)cacheDictionary;

@end
