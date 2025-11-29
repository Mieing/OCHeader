@class UILabel, UIView;

@interface AWELandscapeTitleTagElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL hasTrackShowPaidTag;
@property (nonatomic) BOOL hasTrackShowHasUnlockedTag;

- (void)trackShowHasPaidTagIfNeeded;
- (void)trackShowHasUnlockedTagIfNeeded;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
