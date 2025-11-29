@class MJComposingBGMAdjustPanelItemButton, UIImpactFeedbackGenerator, MJComposingBGMAdjustViewModel, UIView, MMUIButton, MMUILabel;
@protocol MJComposingBGMAdjustPanelViewDelegate;

@interface MJComposingBGMAdjustPanelView : MMUIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) MJComposingBGMAdjustPanelItemButton *volumeButton;
@property (retain, nonatomic) MJComposingBGMAdjustPanelItemButton *timeRangeButton;
@property (retain, nonatomic) MJComposingBGMAdjustPanelItemButton *lyricButton;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly, nonatomic) MJComposingBGMAdjustViewModel *viewModel;
@property (weak, nonatomic) id<MJComposingBGMAdjustPanelViewDelegate> delegate;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (void)setupTopBarView;
- (void)setupContentView;
- (void)updateLyricButton;
- (void)update;
- (void)closeButtonDidTouchUpInside:(id)a0;
- (void)volumeButtonTouchUpInside:(id)a0;
- (void)timeRangeButtonTouchUpInside:(id)a0;
- (void)lyricButtonTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
