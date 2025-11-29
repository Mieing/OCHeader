@class NSString, UIImageView, UILabel, UIView;

@interface AWELeftSideBarAISearchContainerView : UIView

@property (nonatomic) double viewWidth;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *curTitle;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *inputBox;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *inputBoxTitle;
@property (retain, nonatomic) UIView *cameraContainer;
@property (retain, nonatomic) UIImageView *cameraIcon;
@property (retain, nonatomic) UILabel *cameraTitle;
@property (retain, nonatomic) UIView *voiceContainer;
@property (retain, nonatomic) UIImageView *voiceIcon;
@property (retain, nonatomic) UILabel *voiceTitle;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)updateView:(id)a0;
- (double)getContainerHeight;
- (void)addTitle;
- (void)addInputBox;
- (void)addCameraContainer;
- (void)addVoiceContainer;
- (void)setTitleLabelAttributeStringWithText:(id)a0;
- (void)contentTapGesture:(id)a0;
- (void)inputBoxTapGesture:(id)a0;
- (void)cameraTapGesture:(id)a0;
- (void)voiceTapGesture:(id)a0;
- (id)initWithViewWidth:(double)a0 title:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
