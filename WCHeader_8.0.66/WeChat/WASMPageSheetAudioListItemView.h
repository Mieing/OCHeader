@class UIButton;

@interface WASMPageSheetAudioListItemView : WCTSettingSwitchView

@property (retain, nonatomic) UIButton *audioButton;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (void)loadUI:(id)a0;
- (void).cxx_destruct;

@end
