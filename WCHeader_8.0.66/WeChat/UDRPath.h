@interface UDRPath : NSObject

+ (id)getAbsolutePath:(id)a0;
+ (id)getDirOfUDR;
+ (id)getProjectPath:(id)a0;
+ (id)getResourcePath:(id)a0 name:(id)a1;
+ (id)getResourcePostPath:(id)a0;
+ (id)getResourceTempPath:(id)a0 name:(id)a1;
+ (id)getResourceVirtualPath:(id)a0 name:(id)a1 md5:(id)a2 originName:(id)a3;
+ (id)decodeVirtualPath:(id)a0;
+ (BOOL)resourceExist:(id)a0;

@end
