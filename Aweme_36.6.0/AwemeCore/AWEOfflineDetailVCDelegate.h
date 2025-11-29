@class NSArray, NSString;

@interface AWEOfflineDetailVCDelegate : NSObject <AWEAwemeDetailTableViewControllerDelegate>

@property (copy, nonatomic) NSArray *awemeModels;
@property (nonatomic) long long lastIndex;
@property (nonatomic) BOOL isMix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)offlineVideoPlayCheckWithModel:(id)a0;
- (void).cxx_destruct;
- (id)logType;
- (id)initWithModels:(id)a0;

@end
