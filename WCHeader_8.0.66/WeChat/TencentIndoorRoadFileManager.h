@class NSString;

@interface TencentIndoorRoadFileManager : NSObject

@property (copy, nonatomic) NSString *roadRootPath;
@property (copy) NSString *destPath;

+ (id)sharedInstance;

- (id)init;
- (id)getDataVersionWithBuildID:(id)a0;
- (id)getUnzipFilePath;
- (BOOL)saveIndoorRoadData:(id)a0 withBuildid:(id)a1;
- (void)deletWithPath:(id)a0;
- (void)deletOldVersionData:(id)a0 curVersion:(int)a1;
- (void)writeDataToFile:(id)a0 filePath:(id)a1;
- (void).cxx_destruct;

@end
