@class NSString;

@interface IESMetadataStorageConfiguration : NSObject

@property (nonatomic) BOOL enableIndexLog;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) int metadataCapacity;
@property (nonatomic) long long logLevel;

+ (id)configurationWithFilePath:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
