@class NSString;

@interface IESECPersistentConnectionServiceImpl : NSObject <IESECPersistentConnectionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fpid;
+ (id)webSocketAppKey;
+ (id)ecomAppID;
+ (id)ecomWsIdentify;
+ (long long)ecomWsServiceID;
+ (long long)ecomWsMethodID;
+ (id)webSocketURLs;
+ (id)sessionID;


@end
