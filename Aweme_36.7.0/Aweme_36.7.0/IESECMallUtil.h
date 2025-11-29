@interface IESECMallUtil : NSObject

+ (void)setGreyModeInLayer:(id)a0 withSaturation:(double)a1;
+ (double)getWidthFromUILabel:(id)a0;
+ (double)getFloatFromNumber:(id)a0 withDefault:(double)a1 sizeScale:(double)a2;
+ (double)getFloatFromNumber:(id)a0 withDefault:(double)a1;
+ (double)getHeightFromUILabel:(id)a0;
+ (BOOL)isNewScale:(long long)a0;
+ (id)safeStringValueForKey:(id)a0 fromDic:(id)a1;
+ (id)substring:(id)a0 toIndex:(unsigned long long)a1;
+ (id)fetchWay:(id)a0;
+ (id)replaceSchemaByRegular:(id)a0 extraParams:(id)a1 withIndex:(unsigned long long)a2 listUpdater:(id)a3;
+ (id)replaceSchemaByRegular:(id)a0 withIndex:(unsigned long long)a1 listUpdater:(id)a2;

@end
