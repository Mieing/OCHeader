@class NSString;

@interface WAWebStoreProxy : NSObject <IWAWebStoreService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removePreloadedWebStoreWithAppId:(id)a0;


@end
