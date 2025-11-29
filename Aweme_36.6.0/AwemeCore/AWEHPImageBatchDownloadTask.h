@class NSSet, NSMutableSet, NSMutableDictionary;

@interface AWEHPImageBatchDownloadTask : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long taskID;
@property (copy, nonatomic) NSSet *URLStringSet;
@property (retain, nonatomic) NSMutableSet *completedURLStringSet;
@property (retain, nonatomic) NSMutableDictionary *downloadedImageMap;
@property (retain, nonatomic) NSMutableSet *activeRequests;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithURLStringSet:(id)a0;
- (void)p_notifyCompletion:(BOOL)a0;
- (void)p_downloadImageWithURLString:(id)a0;
- (void)p_handleDownloadResult:(BOOL)a0 URLString:(id)a1;
- (void)p_cancelAllRequests;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cancel;

@end
