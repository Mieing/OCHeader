@class NSString, NSFileHandle;

@interface AWELoginDataStoreService : NSObject

@property (nonatomic) BOOL hasWriteDataToFile;
@property (nonatomic) unsigned long long fileSettingSize;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSFileHandle *handle;

- (BOOL)hasExistFile;
- (void)createFileWhenColdLaunch:(BOOL)a0;
- (void)trackerWithStatus:(unsigned long long)a0 message:(id)a1;
- (void)writeDataToFile:(id)a0 tag:(unsigned int)a1;
- (BOOL)canReadSingFile;
- (id)readDataFromFile;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
