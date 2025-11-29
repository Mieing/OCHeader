@class UIImageView, UIView, IESECYataCommonErrorContentView;
@protocol IESECCollectSkeletonViewDelegate;

@interface IESECCollectSkeletonView : IESECYataCommonFitPhoneWidthView

@property (retain, nonatomic) IESECYataCommonErrorContentView *errorView;
@property (retain, nonatomic) UIImageView *skeletonImage;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) BOOL darkTheme;
@property (nonatomic) BOOL withHeader;
@property (weak, nonatomic) id<IESECCollectSkeletonViewDelegate> delegate;

- (void)closePage;
- (id)initWithTheme:(BOOL)a0 withHeader:(BOOL)a1;
- (void)updateWithErrorView;
- (void)reconnect;
- (void).cxx_destruct;
- (void)setupUI;

@end
