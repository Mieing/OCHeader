@class NSDictionary;

@interface MMDiskCommonFolderConfig : NSObject

@property (nonatomic) long long defaultTime;
@property (retain, nonatomic) NSDictionary *nextConfig;

+ (id)desForStoreTime:(long long)a0;

- (id)description;
- (void).cxx_destruct;

@end
