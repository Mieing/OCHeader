@class AFDUserWorkCollectionView, UIView;
@protocol AFDUserWorkCollectionViewDataSource;

@interface AWEIMFansBottomContainer : AWEIMFansBaseContainer

@property (retain, nonatomic) AFDUserWorkCollectionView *userWorkView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) id<AFDUserWorkCollectionViewDataSource> userWorkDataSource;

- (id)p_userWorkDataSource;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (void)willDisplay;

@end
