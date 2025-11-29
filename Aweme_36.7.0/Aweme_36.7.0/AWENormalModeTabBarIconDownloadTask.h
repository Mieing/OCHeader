@class AWEHPImageBatchDownloadTask, NSString, AWEHPBottomTabIconURLModel;

@interface AWENormalModeTabBarIconDownloadTask : NSObject

@property (retain, nonatomic) AWEHPImageBatchDownloadTask *downloadTask;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, copy, nonatomic) NSString *tabID;
@property (readonly, copy, nonatomic) AWEHPBottomTabIconURLModel *URLModel;

- (id)initWithTabID:(id)a0 URLModel:(id)a1;
- (void)p_initDownloadTask;
- (id)p_URLStringSetWithURLModel:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cancel;

@end
