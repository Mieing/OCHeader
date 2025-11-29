@class NSString;

@interface IESGurdFilePaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *cacheRootDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *settingsResponsePath;
@property (class, readonly, copy, nonatomic) NSString *settingsResponseCrc32Path;
@property (class, readonly, copy, nonatomic) NSString *blocklistChannelPath;
@property (class, readonly, copy, nonatomic) NSString *blocklistChannelCrc32Path;
@property (class, readonly, copy, nonatomic) NSString *inactiveDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *activeMetaDataPath;
@property (class, readonly, copy, nonatomic) NSString *activeMetadataPath;
@property (class, readonly, copy, nonatomic) NSString *channelDatasPathNew;
@property (class, readonly, copy, nonatomic) NSString *downloadTempPath;

+ (id)directoryPathForAccessKey:(id)a0;
+ (id)directoryPathForAccessKey:(id)a0 channel:(id)a1;
+ (id)directoryPathForAccessKey:(id)a0 channel:(id)a1 path:(id)a2;
+ (id)downloadedFilePath:(id)a0;
+ (id)inactivePathForAccessKey:(id)a0 channel:(id)a1;
+ (id)briefFilePathWithFullPath:(id)a0;
+ (unsigned long long)fileSizeAtDirectory:(id)a0;
+ (id)fileSizeStringAtPath:(id)a0;
+ (void)initialize;
+ (unsigned long long)fileSizeAtPath:(id)a0;

@end
