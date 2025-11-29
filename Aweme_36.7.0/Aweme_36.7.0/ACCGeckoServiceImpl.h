@class NSString;

@interface ACCGeckoServiceImpl : NSObject <ACCGeckoServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rootDirectoryForAccessKey:(id)a0;
+ (id)rootDirectoryForAccessKey:(id)a0 channel:(id)a1;
+ (id)accessKey;


@end
