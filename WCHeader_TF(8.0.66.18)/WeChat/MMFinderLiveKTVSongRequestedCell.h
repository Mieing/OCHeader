@class MMUIImageView, WCFinderHeadImageView, MMUIButton, MMUILabel;

@interface MMFinderLiveKTVSongRequestedCell : MMFinderLiveKTVSongTableViewCell

@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) MMUILabel *musicSingerLabel;
@property (retain, nonatomic) MMUILabel *scoreLabel;
@property (retain, nonatomic) MMUIImageView *deleteLabel;
@property (retain, nonatomic) MMUIImageView *setTopLabel;
@property (retain, nonatomic) MMUIButton *myDeleteButton;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long position;

+ (id)identifier;

- (void)customLayoutUI;
- (void)willAppear:(unsigned long long)a0;
- (void)onClickedDelete;
- (void)onClickedSetTop;
- (void)showHighlightAnimation;
- (id)scoreLabelText;
- (void)refreshActionButtons;
- (void)setSongItem:(id)a0;
- (BOOL)shouldHideSetTop;
- (BOOL)shouldHideDelete;
- (BOOL)shouldHideScore;
- (BOOL)shouldHideRequest;
- (void).cxx_destruct;

@end
