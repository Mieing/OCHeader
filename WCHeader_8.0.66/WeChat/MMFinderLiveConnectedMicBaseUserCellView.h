@class MMLiveIconButton, MMUIActivityIndicatorView, MMFinderLiveTask, UIView, UILabel, MMFinderLiveConnectMicUser;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicBaseUserCellView : UIView

@property (retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUser;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMLiveIconButton *rightButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;

+ (id)ReuseIdentifier;

- (void)resetState;
- (void)configContainerView;
- (void)configActivityIndicatorView;
- (void)configRightButton;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)configBottomSeparatorLine;
- (void)onTapRightButton;
- (void).cxx_destruct;

@end
