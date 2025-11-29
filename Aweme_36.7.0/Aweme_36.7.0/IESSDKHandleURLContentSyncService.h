@class NSString;

@interface IESSDKHandleURLContentSyncService : NSObject <IESSDKURLServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLFromConsumerSendReq:(id)a0;
+ (id)consumerSendRespFromURL:(id)a0;
+ (id)serviceName;


@end
