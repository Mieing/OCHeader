@class IESLiveMultiKTVMidiTagView, IESLiveSongWaitingUser, UIImageView, IESLiveApplyItem, UILabel, UIButton;
@protocol IESLiveMixKTVApplySingCellDelegate;

@interface IESLiveMixKTVApplySingCell : IESLiveListViewCell

@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UIImageView *singIcon;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) IESLiveMultiKTVMidiTagView *midiTagIcon;
@property (weak, nonatomic) id<IESLiveMixKTVApplySingCellDelegate> delegate;
@property (retain, nonatomic) IESLiveSongWaitingUser *userModel;
@property (retain, nonatomic) IESLiveApplyItem *applyItem;

- (void)didClickCell;
- (void)p_setupUIs;
- (void)renderWithItem:(id)a0 withIndex:(long long)a1;
- (void)updateTypeIsAnchor:(BOOL)a0 isSelf:(BOOL)a1;
- (void)didClickAgree;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
