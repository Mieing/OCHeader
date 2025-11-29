@class NSString;

@interface IESECTaskBannerServiceImpl : NSObject <IESECTaskBannerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addTaskBannerOnView:(id)a0 request:(id)a1 completion:(id /* block */)a2;
+ (BOOL)removeTaskBannerWithContainerID:(id)a0;
+ (id)getTaskBannerWithContainerID:(id)a0;


@end
