@class NSString;

@interface AWEDataLayerKVPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *dataLayerRootPath;
@property (class, readonly, copy, nonatomic) NSString *infoDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *dataDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *sharedDirectoryPath;

+ (id)relativedPathWithPath:(id)a0;
+ (id)directoryPathWithUserId:(id)a0;

@end
