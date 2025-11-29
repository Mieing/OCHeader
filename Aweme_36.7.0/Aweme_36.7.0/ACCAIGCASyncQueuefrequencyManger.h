@class NSString;

@interface ACCAIGCASyncQueuefrequencyManger : NSObject <ACCAIGCASyncQueueFrequencyManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)turnonAsyncQueue:(id)a0;
+ (id)getFrequency;
+ (void)removeFrequency;
+ (void)saveFrequency:(id)a0;
+ (BOOL)isSupportASyncQueue:(id)a0;
+ (BOOL)isUnifyLoading:(id)a0;
+ (BOOL)isUnifyLoadingBackServerResult:(id)a0;
+ (BOOL)isReachedASyncQueueMaximum;
+ (void)addASyncQueuefrequency;
+ (void)downloadRenderWithLoadPath:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (void)requestSupportASyncQueue:(id)a0;
+ (BOOL)enbaleAsyncQueueMuteWithpublishModel:(id)a0;


@end
