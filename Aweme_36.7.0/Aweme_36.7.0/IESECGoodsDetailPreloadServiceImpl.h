@class NSString;

@interface IESECGoodsDetailPreloadServiceImpl : NSObject <IESECGoodsDetailPreloadService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadFull:(id)a0;
+ (id)createPreloadHandlerWithScene:(id)a0;
+ (void)preloadWithScene:(id)a0 schemaList:(id)a1;
+ (BOOL)shouldBlockWithConfig:(id)a0 scene:(id)a1;
+ (BOOL)shouldBlockLowDevicesWithConfig:(id)a0;
+ (id)shared;
+ (id)getConfig;


@end
