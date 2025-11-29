@class UIImageView, UILabel, UIButton;
@protocol ACCDUXActionSheetProtocol, ACCMusicAdvanceEditActionDelegate;

@interface ACCMusicAdvanceEditTipView : UIView

@property (retain, nonatomic) UIImageView *audioIcon;
@property (retain, nonatomic) UILabel *audioLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) id<ACCDUXActionSheetProtocol> actionSheet;
@property (weak, nonatomic) id<ACCMusicAdvanceEditActionDelegate> actionDelegate;

- (void)deleteButtonClicked:(id)a0;
- (double)p_standardTitleWidth;
- (id)p_originalTipHead;
- (double)p_standardHeadWidth;
- (id)p_truncateString:(id)a0 toWidth:(double)a1;
- (id)p_originalTipTail;
- (void)updateAudioTitle:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
