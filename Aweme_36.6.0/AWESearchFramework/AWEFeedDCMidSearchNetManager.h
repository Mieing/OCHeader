@interface AWEFeedDCMidSearchNetManager : NSObject

+ (id)requestSearchDCItemsWithBodyParams:(id)a0 args:(id)a1 timeout:(double)a2 completionBlock:(id /* block */)a3;
+ (id)requestSearchDCItemsWithBodyParams:(id)a0 args:(id)a1 timeout:(double)a2 completionBlock:(id /* block */)a3 originCompletion:(id /* block */)a4;
+ (id)urlStringWithRequestParams:(id)a0 args:(id)a1;
+ (void)buildImageShrinkParam:(id)a0;
+ (id)ackUrl;
+ (id)requestSearchDCItemsWithBodyParams:(id)a0 completionBlock:(id /* block */)a1;
+ (void)prefetchACKWithEnterFrom:(id)a0 pageID:(id)a1;
+ (id)requestUrl;

@end
