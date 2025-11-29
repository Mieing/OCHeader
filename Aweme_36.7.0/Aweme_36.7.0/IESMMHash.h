@interface IESMMHash : NSObject

+ (id)getMD5withPath:(id)a0;
+ (BOOL)checkMetaWithCheckcode:(id)a0 string:(id)a1;
+ (id)getMD5WithString:(id)a0;
+ (id)getMD5withURL:(id)a0;
+ (id)getMetaCheckcodeWithString:(id)a0;

@end
