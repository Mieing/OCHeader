@interface AWEKVStorageSetConfiguration : AWEKVStorageConfiguration

@property (nonatomic) BOOL needBackup;

+ (id)configurationWithOptions:(id)a0;
+ (double)expireTime:(id)a0;

- (id)init;

@end
