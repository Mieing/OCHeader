@class NSString, ACCModernAudioSourceOptionView, UILabel, UIButton;
@protocol ACCModernAudioSourceSelectionViewDelegate;

@interface ACCModernAudioSourceSelectionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCModernAudioSourceOptionView *voiceOptionView;
@property (retain, nonatomic) ACCModernAudioSourceOptionView *musicOptionView;
@property (retain, nonatomic) UIButton *recognizeButton;
@property (nonatomic) long long currentState;
@property (copy, nonatomic) NSString *currentMusicName;
@property (nonatomic) long long selectedAudioSourceType;
@property (nonatomic) BOOL useHalfScreen;
@property (weak, nonatomic) id<ACCModernAudioSourceSelectionViewDelegate> delegate;

- (void)selectAudioSourceType:(long long)a0;
- (void)recognizeButtonClicked:(id)a0;
- (void)setupMainViewAccessibility;
- (void)updateRecognizeButtonAccessibility;
- (void)updateMusicName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useHalfScreen:(BOOL)a1;
- (void)setupAppearance;
- (void).cxx_destruct;
- (void)updateWithState:(long long)a0;
- (void)setupViews;

@end
