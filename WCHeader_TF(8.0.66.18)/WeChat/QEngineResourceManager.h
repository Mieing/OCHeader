@class NSString, NSBundle;

@interface QEngineResourceManager : NSObject

@property (class, readonly, copy, nonatomic) NSString *vectorDataOnlineDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *satelliteOnlineDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *worldmapOnlineDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *roadEventDataOnlineDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *defaultConfigDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *engineLogDirectoryPath;

@property (retain, nonatomic) NSBundle *QMapKitBundle;
@property (copy, nonatomic) NSString *configDirectoryPath;
@property (copy, nonatomic) NSString *businessKey;
@property (copy, nonatomic) NSString *optionalResourcePath;

- (BOOL)fileNameShouldBeCopied:(id)a0 shouldBeDeletedInConfig:(BOOL *)a1;
- (void)copyConfigResource;
- (id)localVersionPlistPath;
- (BOOL)shouldOverwrite:(id)a0;
- (BOOL)compareResourceVersion:(id)a0 cacheVersionDict:(id)a1;
- (BOOL)checkConfigFileMD5:(id)a0;
- (void)setupBundle;
- (void)setupConfigDirectoryWithBusinessKey:(id)a0;
- (id)initWithBusinessKey:(id)a0;
- (void).cxx_destruct;

@end
