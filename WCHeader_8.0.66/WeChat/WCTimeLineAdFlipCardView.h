@class WCAdFlipCardLogic, NSString, WCTimeLineAdFlipCardIntroduceView, WCAdFlipCardInfo, WCTimeLineAdFlipCardMediaHolderView;

@interface WCTimeLineAdFlipCardView : WCContentItemBaseView <WCTimeLineAdFlipCardMediaHolderViewDelegate>

@property (retain, nonatomic) WCAdFlipCardInfo *adFlipCardInfo;
@property (retain, nonatomic) WCTimeLineAdFlipCardMediaHolderView *mediaHolder;
@property (retain, nonatomic) WCTimeLineAdFlipCardIntroduceView *introduceView;
@property (retain, nonatomic) WCAdFlipCardLogic *flipLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForDataItem:(id)a0;

- (void)initViewsWithWCDataItem:(id)a0;
- (id)getMainContentView;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)reportInfo;
- (void)onMediaHolderFlippedWithIndex:(long long)a0;
- (id)onMediaHolderFetchReportInfo;
- (void)onMediaHolderClickedWithIndex:(long long)a0 originView:(id)a1 clickType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
