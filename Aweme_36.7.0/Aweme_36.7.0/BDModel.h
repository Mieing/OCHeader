@interface BDModel : NSObject

+ (id)model:(Class)a0 withJSON:(id)a1 options:(unsigned long long)a2;
+ (id)model:(Class)a0 withJSON:(id)a1;
+ (id)model:(Class)a0 withDictonary:(id)a1;
+ (id)toJSONObjectWithModel:(id)a0;
+ (id)toJSONDataWithModel:(id)a0;
+ (id)toJSONStringWithModel:(id)a0;

@end
