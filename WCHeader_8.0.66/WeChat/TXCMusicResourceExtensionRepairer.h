@class NSString, NSFileManager;

@interface TXCMusicResourceExtensionRepairer : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;
@property (copy, nonatomic) NSString *hardLinkFilePath;
@property (copy, nonatomic) NSString *rawFilePath;
@property (readonly, copy, nonatomic) NSString *repairedFilePath;

- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (id)repairRawFilePath;
- (void)deleteHardLinkFile;
- (void)deleteFile:(id)a0;
- (BOOL)isValidFilePath:(id)a0;
- (BOOL)needRepair:(id)a0;
- (BOOL)canDelete:(id)a0;
- (BOOL)needUpdateRawFilePath:(id)a0;
- (id)repairFilePathInternal;
- (id)getFileType:(id)a0;
- (id)removeSymbolicLink:(id)a0;
- (id)convertToRegularFile:(id)a0;
- (id)createHardLinkFileWithExtension:(id)a0;
- (void).cxx_destruct;

@end
