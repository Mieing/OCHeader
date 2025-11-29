@class NSString, NSDateFormatter, NSFileHandle;

@interface QMapLogger : NSObject

@property (retain, nonatomic) NSDateFormatter *dateFormatterForMMddHHmmss;
@property (nonatomic) BOOL logOn;
@property (retain, nonatomic) NSDateFormatter *dateFormatterForMMddHHmmss;
@property (copy, nonatomic) NSString *fileTextPath;
@property (retain, nonatomic) NSFileHandle *selfHandle;
@property (nonatomic) BOOL logOn;
@property (readonly, nonatomic) NSString *fileDirPath;

+ (id)sharedInstance;

- (id)dateByMMddHHmmss;
- (id)logWithText:(id)a0 level:(id)a1 event:(id)a2 levelNumber:(int)a3;
- (id)init;
- (void)writeLogText:(id)a0;
- (void)deleteExpiredFiles;
- (void).cxx_destruct;

@end
