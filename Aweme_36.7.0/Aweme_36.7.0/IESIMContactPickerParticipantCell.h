@class NSString, UIImageView, IESIMContactPickerParticipantCellModel, UIView, UILabel, AWEIMFansTagsView;
@protocol AWEIMMessageCellTagViewInterface, IESIMGroupParticipantTagContainerViewProtocol;

@interface IESIMContactPickerParticipantCell : IESIMContactPickerContentCell <IESIMContactPickerContentCellProtocol>

@property (retain, nonatomic) IESIMContactPickerParticipantCellModel *cellModel;
@property (retain, nonatomic) UIView<AWEIMMessageCellTagViewInterface> *officialAccountTagLabel;
@property (retain, nonatomic) UIView<AWEIMMessageCellTagViewInterface> *roleTagView;
@property (retain, nonatomic) UIView<AWEIMMessageCellTagViewInterface> *messageActiveTagView;
@property (retain, nonatomic) UIImageView *fansClubIconImageView;
@property (retain, nonatomic) UILabel *fansClubLevelLabel;
@property (retain, nonatomic) UIView<AWEIMMessageCellTagViewInterface> *liveFansSubscriptionDateLabel;
@property (retain, nonatomic) AWEIMFansTagsView *fansTagsView;
@property (retain, nonatomic) UIView<IESIMGroupParticipantTagContainerViewProtocol> *participantTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithCellModel:(id)a0;
- (void)__updateFansClubLevelLabelWithText:(id)a0;
- (void)__setupCustomUI;
- (void)hideTags;
- (void)updateSpaceForView:(id)a0;
- (void)__updateFansClubTagWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
