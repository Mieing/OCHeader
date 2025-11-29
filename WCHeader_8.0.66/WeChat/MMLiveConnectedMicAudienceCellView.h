@class MMHeadImageView, UIView, MMLiveDotLoadingView, UILabel, MMUIButton, MMLiveApplyConnectMicAudience;
@protocol MMLiveConnectedMicAudienceCellViewDelegate;

@interface MMLiveConnectedMicAudienceCellView : UITableViewCell

@property (retain, nonatomic) MMLiveApplyConnectMicAudience *audienceInfo;
@property (retain, nonatomic) MMHeadImageView *avatarView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (retain, nonatomic) MMLiveDotLoadingView *dotLoadingView;
@property (nonatomic) unsigned long long audienceCellState;
@property (nonatomic) BOOL isDisabled;
@property (weak, nonatomic) id<MMLiveConnectedMicAudienceCellViewDelegate> delegate;

- (void)prepareForReuse;
- (void)updateViews;
- (void)updateViewsFrame;
- (void)layoutSubviews;
- (void)showDotLoading;
- (void)hideDotLoading;
- (void)onTapRightButton;
- (void).cxx_destruct;

@end
