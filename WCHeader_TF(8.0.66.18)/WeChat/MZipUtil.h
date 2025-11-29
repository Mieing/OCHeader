@interface MZipUtil : NSObject

+ (BOOL)UnZipFile:(id)a0 toPath:(id)a1;
+ (BOOL)UnZipFile:(id)a0 toPath:(id)a1 overwrite:(BOOL)a2 password:(id)a3 error:(id *)a4;
+ (id)dateWithDosDate:(unsigned long long)a0;
+ (BOOL)is7zFile:(id)a0;

@end
