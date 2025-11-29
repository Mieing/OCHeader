@class NSString;

@interface IESECAppInfoServiceImpl : NSObject <IESECAppInfoService, AWEECAppInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInHouse;
+ (BOOL)isBOEEnabled;
+ (BOOL)isPPEEnabled;
+ (Class)aIESECAppInfoServiceCommonAdapterClass;
+ (id)deviceID;
+ (id)installID;
+ (unsigned long long)currentTarget;

- (id)aIESECAppInfoServiceCommonAdapter;

@end
