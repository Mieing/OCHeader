@class NSString;

@interface TencentLBSLogManager : NSObject

@property (copy, nonatomic) NSString *appleDataPath;
@property (copy, nonatomic) NSString *tencentDataPath;
@property (copy, nonatomic) NSString *badDataPath;
@property (copy, nonatomic) NSString *calmanPath;

+ (id)sharedInstance;

- (id)init;
- (void)createFileAtPath:(id)a0;
- (void)deleteFileAtPath:(id)a0;
- (void)writeDataToFile:(id)a0 filePath:(id)a1;
- (id)readFileToData:(id)a0;
- (id)getAllLocationData;
- (void)newFile;
- (void)writeLogToFile:(id)a0 wifiMac:(id)a1 wifiName:(id)a2;
- (void)writeAppleToFile:(id)a0 wifiMac:(id)a1 wifiName:(id)a2;
- (void)writeBadLocationToFile:(id)a0 wifiMac:(id)a1 wifiName:(id)a2;
- (void)writeCalmanDataToFile:(id)a0;
- (void)upLoadLogData:(id)a0;
- (void)upLoadLogData;
- (void).cxx_destruct;

@end
