@class NSMutableDictionary, UIImageView, UILabel, UIView;
@protocol AWEEcomAISearchSwitchPromptViewDelegate;

@interface AWEEcomAISearchSwitchPromptView : UIView

@property (retain, nonatomic) UIView *switchView;
@property (retain, nonatomic) UIImageView *entranceSwitchBGImageView;
@property (retain, nonatomic) UIImageView *entranceCheckmarkImageView;
@property (retain, nonatomic) UIImageView *switchAnimateImageView;
@property (retain, nonatomic) UIView *switchBackgroundColorView;
@property (retain, nonatomic) UIView *promptView;
@property (retain, nonatomic) UIImageView *promptPlaceholderImageView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) UILabel *prePromptLabel;
@property (nonatomic) BOOL hasEcomAISearchBarViewShown;
@property (nonatomic) BOOL isShowingSwitchAnimateImageView;
@property (nonatomic) double lastClickTime;
@property (retain, nonatomic) NSMutableDictionary *cacheLabelWidthDic;
@property (nonatomic) BOOL isAISearchOn;
@property (nonatomic) BOOL isPromptWordSwitching;
@property (weak, nonatomic) id<AWEEcomAISearchSwitchPromptViewDelegate> delegate;
@property (nonatomic) long long showState;
@property (nonatomic) BOOL hasPromptWordExit;

- (void)updateSwitchBackgroundColorViewColor:(id)a0;
- (void)removeSwitchAnimateImageViewIfNeeded;
- (void)switchPromptViewChangeShowStateCollapseImmediately;
- (void)updatePromptViewWord:(id)a0 animate:(BOOL)a1;
- (id)initWithHasEcomAISearchBarViewShown:(BOOL)a0;
- (double)calculateLabelWidthWithText:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (void)handleTap:(id)a0;

@end
