@class ACCModernAudioSourceAndTemplateOptionView, NSString, UILabel, ACCTextTypeFaceCategoryTemplateView, ACCTextTypeFaceCategoryModel, UIButton;
@protocol ACCModernAudioSourceAndTemplateSelectionViewDelegate;

@interface ACCModernAudioSourceAndTemplateSelectionView : UIView

@property (retain, nonatomic) ACCModernAudioSourceAndTemplateOptionView *voiceOptionView;
@property (retain, nonatomic) ACCModernAudioSourceAndTemplateOptionView *musicOptionView;
@property (copy, nonatomic) NSString *currentMusicName;
@property (nonatomic) long long selectedAudioSourceType;
@property (retain, nonatomic) ACCTextTypeFaceCategoryTemplateView *templateView;
@property (retain, nonatomic) UIButton *recognizeButton;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) ACCTextTypeFaceCategoryModel *templateModel;
@property (retain, nonatomic) UILabel *audioSourceTitleLabel;
@property (nonatomic) BOOL useHalfScreen;
@property (weak, nonatomic) id<ACCModernAudioSourceAndTemplateSelectionViewDelegate> delegate;

- (void)selectAudioSourceType:(long long)a0;
- (void)handleTemplateSelected:(id)a0 withIndexPath:(id)a1;
- (void)recognizeButtonClicked:(id)a0;
- (void)setupMainViewAccessibility;
- (void)updateRecognizeButtonState;
- (void)updateRecognizeButtonAccessibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 musicName:(id)a1 templateModel:(id)a2 useHalfScreen:(BOOL)a3;
- (void)updateMusicName:(id)a0;
- (void)setupAppearance;
- (void).cxx_destruct;
- (void)updateWithState:(long long)a0;
- (void)setupViews;

@end
