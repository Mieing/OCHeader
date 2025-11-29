@class NSString;

@interface IESECGeckoModuleServiceImpl : NSObject <IESECGeckoModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
+ (id)accessKey;


@end
