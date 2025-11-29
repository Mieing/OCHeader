@class NSString, UILabel, ACCMusicTrimExpandClickButton;
@protocol ACCMusicTrimCheckBoxViewDelegate;

@interface ACCMusicTrimCheckBoxView : UIView

@property (retain, nonatomic) NSString *hintString;
@property (nonatomic) BOOL darkTheme;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) ACCMusicTrimExpandClickButton *checkBoxButton;
@property (nonatomic) BOOL checked;
@property (weak, nonatomic) id<ACCMusicTrimCheckBoxViewDelegate> delegate;

- (id)_buttonBorderColor;
- (void)setupHintLabel;
- (double)checkBoxWidth;
- (id)initWithHint:(id)a0 darkTheme:(BOOL)a1;
- (void)setupCheckBox;
- (void)onCheckBoxClick;
- (double)_buttonBorderWidth;
- (id)initWithHint:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;
- (id)_buttonBackgroundColor;

@end
