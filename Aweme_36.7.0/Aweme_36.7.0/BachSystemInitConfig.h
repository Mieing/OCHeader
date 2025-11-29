@class NSString, BachIOSResourceFinder;

@interface BachSystemInitConfig : NSObject

@property (copy) NSString *applicationName;
@property (copy) NSString *deviceName;
@property (retain) BachIOSResourceFinder *finder;
@property (copy) NSString *cacheFolder;

- (id)init:(id)a0 deviceName:(id)a1 finder:(id)a2;
- (void).cxx_destruct;

@end
