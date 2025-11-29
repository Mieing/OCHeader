@interface APBUtils : NSObject

+ (id)MD5WithData:(id)a0;
+ (BOOL)isWifiConnected;
+ (id)randomString:(long long)a0;
+ (struct __CVBuffer { } *)pixelBufferFromCGImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)getColorFromNSString:(id)a0;
+ (id)getColorStrFromUIColor:(id)a0;
+ (void)APBMainThread:(id /* block */)a0;
+ (id)convertToJSONString:(id)a0;
+ (id)localizedStringForKey:(id)a0 inBundle:(id)a1;
+ (id)retSubMessageForKey:(id)a0;
+ (id)languageMappingWithKey:(id)a0;
+ (long long)getTotalDiskSize;
+ (long long)getAvailableDiskSize;
+ (id)flipImage:(id)a0;
+ (struct { int x0; int x1; })maxResolution:(long long)a0;
+ (void)alertWithAlertModel:(id)a0 confirmHandler:(id /* block */)a1 cancelHandler:(id /* block */)a2 presentHandler:(id /* block */)a3;
+ (id)getAppDisplayName;
+ (id)retCodeMsgDict;
+ (id)retCodeDict;
+ (id)evidenceVideoCompressionProperties;
+ (void)genVideoWithFileURL:(id)a0 imageArray:(id)a1 size:(struct CGSize { double x0; double x1; })a2 compressionProperties:(id)a3 handler:(id /* block */)a4;
+ (void)generateVideoFileWithFileName:(id)a0 imageArray:(id)a1 filePath:(id)a2 outputSize:(struct CGSize { double x0; double x1; })a3 compressionProperties:(id)a4 handler:(id /* block */)a5;
+ (void)createWorkingDirectoryWithPath:(id)a0 error:(id *)a1;
+ (id)errorWithErrorDomian:(id)a0 extInfo:(id)a1 errMsgWithFormat:(id)a2;
+ (void)removePairInDictionary:(id)a0 withCheck:(id /* block */)a1;
+ (id)cacheFileDir;
+ (id)returnContentDir;
+ (id)supportedActionLivenessArray;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setX:(double)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setY:(double)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setW:(double)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setH:(double)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)dictionaryWithJsonString:(id)a0;
+ (id)deviceVersion;
+ (id)appName;
+ (id)localizedStringForKey:(id)a0;
+ (id)appVersion;
+ (id)osVersion;
+ (BOOL)isWifi;
+ (id)currentLanguage;
+ (id)codeForKey:(id)a0;
+ (id)cameraWithPosition:(long long)a0;

@end
