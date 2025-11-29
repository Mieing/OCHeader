@class NSArray;

@interface AWEStoryImpl.StoryDataController : AWEStoryImpl.StoryListBaseController <AWEStoryImpl.StoryDataControllerInterface, AWEStoryImpl.StoryListControllerViewLifeCycle, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ triggerLoadMoreIndexDiff;
}

@property (nonatomic, readonly) BOOL isRequestOnAir;
@property (nonatomic, readonly) NSArray *awemeList;

- (void)deleteAwemeWith:(id)a0 completion:(id /* block */)a1;
- (void)reloadDataAt:(id)a0;
- (void)fetchDataWith:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
