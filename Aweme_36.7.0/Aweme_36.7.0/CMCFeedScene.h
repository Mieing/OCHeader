@class CMCAwemeScene, CMCCallable;

@interface CMCFeedScene : CMCScene

@property (readonly, nonatomic) CMCAwemeScene *aweme;
@property (retain, nonatomic) CMCCallable *receiveAweme;
@property (retain, nonatomic) CMCCallable *willDisplayCell;
@property (retain, nonatomic) CMCCallable *didEndDisplayingCell;
@property (retain, nonatomic) CMCCallable *updateAdAwemeInfo;
@property (retain, nonatomic) CMCCallable *dataSourceBeforeUpdate;
@property (retain, nonatomic) CMCCallable *commerceHandleResponseModel;
@property (retain, nonatomic) CMCCallable *preloadAdVideoAndAdSource;
@property (retain, nonatomic) CMCCallable *updateAdAwemeInfoWhenChangeList;

- (void).cxx_destruct;
- (id)init;

@end
