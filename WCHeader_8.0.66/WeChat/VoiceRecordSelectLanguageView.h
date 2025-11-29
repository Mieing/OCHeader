@class NSString, UIView;
@protocol VoiceRecordSelectLanguageViewDelegate;

@interface VoiceRecordSelectLanguageView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *selectedPanelView;
@property (weak, nonatomic) id<VoiceRecordSelectLanguageViewDelegate> delegate;
@property (nonatomic) unsigned int selectedLanguageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configPageSheet;
- (void)configSelectedPanelView;
- (void)pageSheetDidShow;
- (void)onTapSelectLanguageButton:(id)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end
