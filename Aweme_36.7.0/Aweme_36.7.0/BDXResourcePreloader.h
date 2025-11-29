@interface BDXResourcePreloader : NSObject

+ (void)schemaPreload:(id)a0 taskConfig:(id)a1;
+ (void)loadResource:(id)a0 taskConfig:(id)a1;
+ (void)dealNotificationAction:(id)a0;
+ (id)resourcePreloaderSerialQueue;
+ (id)concurrentOperationQueue;
+ (void)_loadResource:(id)a0 taskConfig:(id)a1;
+ (void)preloadImageWithConfig:(id)a0 preloadItem:(id)a1 taskConfig:(id)a2;
+ (void)gurdPreloadWithConfig:(id)a0 preloadItem:(id)a1 taskConfig:(id)a2;
+ (void)commonPreloadWithConfig:(id)a0 preloadItem:(id)a1 taskConfig:(id)a2;
+ (void)monitorFetchEventWithURLString:(id)a0 success:(BOOL)a1 metric:(id)a2 res_tag:(id)a3 res_version:(id)a4 res_from:(id)a5 res_url:(id)a6 res_channel:(id)a7 res_message:(id)a8;
+ (id)serialOperationQueue;

@end
