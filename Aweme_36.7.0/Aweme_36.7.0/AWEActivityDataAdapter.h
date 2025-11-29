@class AWEActivityDataModel;

@interface AWEActivityDataAdapter : NSObject

@property (retain, nonatomic) AWEActivityDataModel *allPageModel;
@property (retain, nonatomic) AWEActivityDataModel *feedPageDataModel;
@property (retain, nonatomic) AWEActivityDataModel *detailPageDataModel;

+ (id)sharedInstance;

- (id)currentActivityDataModel;
- (void)handleRawData:(id)a0 completion:(id /* block */)a1;
- (void)cleanActivityDataModel;
- (id)detailPageActivityDataModel;
- (id)feedPageActivityDataModel;
- (void)splitActivityDataModel;
- (BOOL)isShowInFeedPage:(id)a0;
- (BOOL)isShowInDetailPage:(id)a0;
- (void).cxx_destruct;

@end
