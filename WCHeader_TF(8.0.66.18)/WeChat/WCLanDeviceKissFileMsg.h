@class NSString;

@interface WCLanDeviceKissFileMsg : MMObject

@property (nonatomic) BOOL isContainDetail;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileMD5;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSString *fileExt;

- (void).cxx_destruct;

@end
