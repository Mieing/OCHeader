@class NSString, NSFileHandle;

@interface BDFileUploadLogManager : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSFileHandle *fileHanle;

+ (id)shareLogManager;

- (void)writeLogToManager:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
