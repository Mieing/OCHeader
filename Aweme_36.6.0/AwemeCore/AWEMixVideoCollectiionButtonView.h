@class UIImage, DUXPopover, NSString, AWEMixVideoModel, NSDictionary, NSNumber, AWEBizUIBubble;

@interface AWEMixVideoCollectiionButtonView : AWECollectionButton <AWEMixVideoCollectionButtonViewProtocol>

@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (weak, nonatomic) AWEBizUIBubble *favoriteHintBubble;
@property (weak, nonatomic) DUXPopover *favoriteHintPopover;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) id /* block */ mixTapBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSDictionary *trackerParamsDict;
@property (nonatomic) double favoriteHintBubbleYOffset;
@property (retain, nonatomic) NSNumber *favoriteNotiYOffset;
@property (nonatomic) BOOL isFromDetail;
@property (nonatomic) BOOL isFromLandscape;
@property (retain, nonatomic) NSNumber *episode;
@property (nonatomic) long long collectionTipType;
@property (copy, nonatomic) id /* block */ selectedChangeBlock;
@property (nonatomic) BOOL selectedStatusDidReady;
@property (nonatomic) BOOL useFavoriteSuccessBlock;
@property (copy, nonatomic) id /* block */ favoriteSuccessBlock;
@property (retain, nonatomic) UIImage *beforeImage;
@property (retain, nonatomic) UIImage *afterImage;
@property (copy, nonatomic) id /* block */ exitLandscapeBlock;
@property (copy, nonatomic) NSString *preCompilationId;
@property (copy, nonatomic) NSString *currentAwemeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickBtn:(id)a0;
- (void)favoriteItemChanged:(id)a0;
- (void)refreshModel:(id)a0;
- (void)updateCollectImage;
- (void)trackLiveVipMixWithActionType:(id)a0 btnType:(id)a1;
- (void)dismissHint;
- (void)postNotificationWithType:(unsigned long long)a0;
- (void)showFavoriteToast;
- (void)adaptToBigFontStyle;
- (void)trackClickCollectEventWith:(BOOL)a0;
- (void)requestUnCollectedWithCompleteBlock:(id /* block */)a0;
- (void)requestCollectedWithCompleteBlock:(id /* block */)a0;
- (void)showBottomNoti;
- (void)showFavoriteBuddle;
- (void)bubbleClickAction;
- (void)trackFavoriteHintShow;
- (void)trackClickFavoriteHint;
- (void)trackEnterFavoritePage;
- (void)collectionAction;
- (void)trackResultClick:(BOOL)a0 logExtraDict:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
