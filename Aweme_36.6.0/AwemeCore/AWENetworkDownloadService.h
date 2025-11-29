@interface AWENetworkDownloadService : NSObject

+ (id)dictFromProcessInfo:(id)a0 request:(id)a1;
+ (id)extraInfoFromDownloadResult:(id)a0 outputError:(id *)a1;
+ (id)sharedInstance;

- (void)startDownloadRequst:(id)a0;
- (void)cancelDownloadRequst:(id)a0 actionCallback:(id /* block */)a1;
- (void)deleteDownloadRequst:(id)a0 actionCallback:(id /* block */)a1;
- (void)queryDownloadInfoWithTaskID:(id)a0 downloadInfoBlock:(id /* block */)a1;
- (void)queryDownloadInfoWithTask:(id)a0 downloadInfoBlock:(id /* block */)a1;
- (void)moveFileFrom:(id)a0 destination:(id)a1 fixConflict:(long long)a2 outputError:(id *)a3;

@end
