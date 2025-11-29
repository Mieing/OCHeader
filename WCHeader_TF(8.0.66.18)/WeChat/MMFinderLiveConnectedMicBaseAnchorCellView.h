@class WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface MMFinderLiveConnectedMicBaseAnchorCellView : MMFinderLiveConnectedMicBaseUserCellView

@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (nonatomic) BOOL forceDisableOperationButton;
@property (nonatomic) BOOL useNewSubTitle;

+ (id)ReuseIdentifier;

- (void)resetState;
- (void)layoutSubviews;
- (void)configAvatarView;
- (void)configAuthIconView;
- (void)configSubTitleLabel;
- (void)configNickNameLabelWithSearchInfo:(id)a0;
- (void)updateRightButton;
- (void)updateWithConnectMicUser:(id)a0 searchInfo:(id)a1 forceHideOperationButton:(BOOL)a2 forceDisableOperationButton:(BOOL)a3 hideBottomSeparatorLine:(BOOL)a4;
- (void)updateUseNewSubTitle:(BOOL)a0;
- (void)layoutUI;
- (void).cxx_destruct;

@end
