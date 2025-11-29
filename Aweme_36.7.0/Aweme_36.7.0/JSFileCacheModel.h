@class NSString;

@interface JSFileCacheModel : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) BOOL fromOffline;
@property (nonatomic) unsigned long long loadDuration;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL isDisabled;

- (void).cxx_destruct;

@end
