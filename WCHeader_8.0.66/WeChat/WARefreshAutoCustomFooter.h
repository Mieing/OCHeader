@class MMUIImageView, WARefreshDefaultNoMoreDataLabel;

@interface WARefreshAutoCustomFooter : WARefreshAutoFooter

@property (retain, nonatomic) WARefreshDefaultNoMoreDataLabel *noMoreDataView;
@property (retain, nonatomic) MMUIImageView *loadingView;
@property (nonatomic) int marginTop;
@property (nonatomic) int lineWordsInterval;

- (id)init;
- (void)setupViews;
- (void)placeSubviews;
- (void)updateWords:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;

@end
