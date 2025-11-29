@class AWEGradientView, UIImageView, UIView, UILabel, YYLabel;
@protocol AWEFeedShareInfoContainerViewDelegate;

@interface AWEFeedShareInfoContainerView : UIView <AWEFeedShareInfoContainerViewProtocol>

@property (retain, nonatomic) YYLabel *titleLab;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *shareIconView;
@property (retain, nonatomic) UIImageView *userIconView;
@property (retain, nonatomic) UILabel *userNameLab;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (weak, nonatomic) id<AWEFeedShareInfoContainerViewDelegate> delegate;

- (void)config:(id)a0 width:(double)a1;
- (BOOL)isNonPostscript:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
