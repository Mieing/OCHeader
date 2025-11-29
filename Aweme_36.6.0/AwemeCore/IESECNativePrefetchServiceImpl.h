@class NSString;

@interface IESECNativePrefetchServiceImpl : NSObject <IESECNativePrefetchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerNativePrefetch:(id)a0 certId:(id)a1;
+ (void)prefetchDataWithRequestId:(id)a0 apiKey:(id)a1 callback:(id /* block */)a2;
+ (id)triggerNativePrefetch:(id)a0 certId:(id)a1 addReusePool:(BOOL)a2 monitorInfo:(id)a3 perfTiming:(id)a4;
+ (id)triggerNativePrefetch:(id)a0;
+ (id)prefetchDataWithRequestId:(id)a0 apiKey:(id)a1;


@end
