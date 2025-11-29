@class UIImageView, IESLiveCustomButton, UILabel, GetGroupInfoResponse_GroupInfo, HTSLiveLinkmicAudienceSettingValue;

@interface IESLiveInteractionChatKtvGroupJoinPanelView : IESLiveInteractivePanelView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) IESLiveCustomButton *confirmButton;
@property (retain, nonatomic) IESLiveCustomButton *disableButton;
@property (retain, nonatomic) GetGroupInfoResponse_GroupInfo *group;
@property (copy, nonatomic) HTSLiveLinkmicAudienceSettingValue *delegateToFriendsStatus;
@property (copy, nonatomic) id /* block */ didClickedConfirmAction;

- (void)renderWithGroup:(id)a0;
- (void)confirmButtonActions:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (void)refreshStatus;

@end
