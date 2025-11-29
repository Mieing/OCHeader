@class BizRecentReadNoMoreDataLabel, MMUIImageView;

@interface BizRecentReadFooter : UIView

@property (retain, nonatomic) BizRecentReadNoMoreDataLabel *noMoreDataView;
@property (retain, nonatomic) MMUIImageView *loadingView;

- (id)init;
- (void)setupViews;
- (void)layoutSubviews;
- (void)setState:(unsigned int)a0;
- (void).cxx_destruct;

@end
