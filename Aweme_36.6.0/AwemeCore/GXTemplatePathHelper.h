@interface GXTemplatePathHelper : NSObject

+ (id)templateResourceStoragePath;
+ (id)loadBizBundlePathWithBundleName:(id)a0;
+ (id)loadBinaryFilePathWithFolderPath:(id)a0 fileName:(id)a1 fileType:(id)a2;
+ (id)loadTextFilePathWithFolderPath:(id)a0 templateId:(id)a1 fileName:(id)a2 fileType:(id)a3;
+ (id)templateResourceDownloadPath;
+ (id)dataBaseStoragePath;

@end
