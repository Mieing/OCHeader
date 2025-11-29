@class MMBGMChooseFeedListSelectedBar, TextStateBlurButton, WCFinderSimplePlayerView, WCFinderFeedContentVM, CAGradientLayer, MMBGMSelectedConfig, NSString;
@protocol MMBGMChooseFinderFeedListViewTableViewCellDelegate;

@interface MMBGMChooseFinderFeedListViewTableViewCell : UITableViewCell <MMBGMChooseFeedListSelectedBarDelegate, WCFinderFeedContentMediaActionProtocol, WCFinderFocusCellProtocol>

@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (retain, nonatomic) TextStateBlurButton *editButton;
@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (retain, nonatomic) MMBGMChooseFeedListSelectedBar *selectedBar;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) CAGradientLayer *shadowLayer;
@property (weak, nonatomic) id<MMBGMChooseFinderFeedListViewTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellId;
+ (double)cellInnerMargin;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)updateWithContentVM:(id)a0 width:(double)a1 isSelected:(BOOL)a2 config:(id)a3 highLightText:(id)a4;
- (void)setButtonIsSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)onClickEditBgmButton:(id)a0;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)stopVideoIfSupport;
- (BOOL)currentMediaIsPlay;
- (void)playerView:(id)a0 onVideoPrepareToPlay:(id)a1;
- (void)onSelectedBarClickButton:(id)a0;
- (void)onSelectedBarStateChange:(unsigned long long)a0;
- (void).cxx_destruct;

@end
