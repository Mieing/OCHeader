@class NSString;

@interface AWEStoryImpl.Story25TabDataController24Story : _TtCs12_SwiftObject <AFDMomentFeedDataControllerProtocol> {
    void /* unknown type, empty encoding */ serviceContainer;
    void /* unknown type, empty encoding */ dataPlugins;
    void /* unknown type, empty encoding */ _sectionViewModels;
    void /* unknown type, empty encoding */ apiEndPoint;
    void /* unknown type, empty encoding */ dataQueueName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shellContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelPool;
    void /* unknown type, empty encoding */ $__lazy_storage_$_genreManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

@property (nonatomic) BOOL tabHasMore;
@property (nonatomic, copy) NSString *tabUserID;
@property (nonatomic) long long level;
@property (nonatomic) unsigned long long maxTimestamp;

- (void)syncParamsWith:(BOOL)a0 level:(long long)a1 maxTimestamp:(unsigned long long)a2;
- (id)retrieveAwemeModelArray;
- (void)replaceTabDataSourceWith:(id)a0;
- (unsigned long long)currentSource;

@end
