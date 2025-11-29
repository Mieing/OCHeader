@class CMCCallable;

@interface CMCAwemeDetailScene : CMCScene

@property (nonatomic) BOOL shouldRequestAdsInProfile;
@property (nonatomic) long long lastAdIndex;
@property (retain, nonatomic) CMCCallable *willDisplayCell;
@property (retain, nonatomic) CMCCallable *didEndDisplayingCell;
@property (retain, nonatomic) CMCCallable *didDeleteCell;
@property (retain, nonatomic) CMCCallable *trackReport;

- (void).cxx_destruct;
- (id)init;

@end
