@class NSString;

@interface MBCacheFileItem : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int modifyTime;

- (void).cxx_destruct;

@end
