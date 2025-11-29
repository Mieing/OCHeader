@class NSString;

@interface OMJEnvironmentParams : NSObject

@property (readonly, copy, nonatomic) NSString *persistentDirectory;
@property (readonly, copy, nonatomic) NSString *cachesDirectory;
@property (readonly, copy, nonatomic) NSString *temporaryDirectory;
@property (readonly, copy, nonatomic) NSString *resourcesDirectory;
@property (readonly, copy, nonatomic) NSString *clipBundleDirectory;
@property (readonly, nonatomic) BOOL createDirectoryIfNotExist;
@property (readonly, copy, nonatomic) NSString *localeID;

- (id)initWithPersistentDirectory:(id)a0 cachesDirectory:(id)a1 temporaryDirectory:(id)a2 resourcesDirectory:(id)a3 createDirectoryIfNotExist:(BOOL)a4 localeID:(id)a5;
- (id)initWithPersistentDirectory:(id)a0 cachesDirectory:(id)a1 temporaryDirectory:(id)a2 resourcesDirectory:(id)a3 clipBundleDirectory:(id)a4 createDirectoryIfNotExist:(BOOL)a5 localeID:(id)a6;
- (void).cxx_destruct;

@end
