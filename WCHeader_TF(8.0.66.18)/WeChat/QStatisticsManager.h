@class NSString, NSMutableArray;

@interface QStatisticsManager : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSMutableArray *sendQueue;
@property (nonatomic) BOOL hasUploaded;

+ (id)manager;
+ (void)uploadIsInternal:(int)a0;

- (id)init;
- (void)load;
- (void)save;
- (void)saveToFile;
- (void)send;
- (void)addToSendingQueue:(id)a0;
- (void)upLoadSensitiveInfo;
- (void).cxx_destruct;

@end
