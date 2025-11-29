@protocol BDPFeedBackHeightAdapterViewDelegate;

@interface BDPFeedBackHeightAdapterView : UIView

@property (weak, nonatomic) id<BDPFeedBackHeightAdapterViewDelegate> feedBackHeightAdapterViewDelegate;

- (void)feedBackUpdateNavigationBarConstraintFrame;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupView;

@end
