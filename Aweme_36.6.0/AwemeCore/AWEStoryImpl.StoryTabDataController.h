@class NSString;

@interface AWEStoryImpl.StoryTabDataController : AWEStoryKit.StoryKitBaseController <AFDMomentFeedDataControllerProtocol, AWEStoryKit.StoryKitViewControllerLifeCycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_genreManager;
    void /* unknown type, empty encoding */ sectionInfoList;
    void /* unknown type, empty encoding */ dataQueueName;
}

@property (nonatomic, copy) NSString *tabUserID;
@property (nonatomic) BOOL tabHasMore;
@property (nonatomic) long long level;
@property (nonatomic) unsigned long long maxTimestamp;

- (void)syncParamsWith:(BOOL)a0 level:(long long)a1 maxTimestamp:(unsigned long long)a2;
- (id)retrieveAwemeModelArray;
- (void)replaceTabDataSourceWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)currentSource;
- (void)viewDidLoad;

@end
