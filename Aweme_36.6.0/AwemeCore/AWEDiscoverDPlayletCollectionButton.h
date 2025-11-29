@class DUXPopover, NSDictionary, NSString, AWEPlayletInfoModel, AWEBizUIBubble;
@protocol AWEDiscoverDPlayletCollectionButtonTrackParamsDelegate;

@interface AWEDiscoverDPlayletCollectionButton : AWECollectionButton

@property (retain, nonatomic) AWEPlayletInfoModel *playletInfoModel;
@property (retain, nonatomic) NSDictionary *schemaLogExtras;
@property (weak, nonatomic) AWEBizUIBubble *favoriteHintBubble;
@property (weak, nonatomic) DUXPopover *favoriteHintPopover;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) id /* block */ collectTapBlock;
@property (nonatomic) long long anchorType;
@property (nonatomic) double favoriteHintBubbleYOffset;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (weak, nonatomic) id<AWEDiscoverDPlayletCollectionButtonTrackParamsDelegate> delegate;
@property (nonatomic) BOOL isFromContentXtab;

- (void)configureUI;
- (void)clickBtn:(id)a0;
- (void)favoriteItemChanged:(id)a0;
- (void)refreshModel:(id)a0;
- (void)dismissHint;
- (void)requestUnCollected;
- (void)requestCollected;
- (void)showFavoriteBuddleWithController:(id)a0;
- (void)postNotificationWithType:(unsigned long long)a0;
- (void)setCollectionButtonTitle:(id)a0;
- (void)setUncollectionButtonTitle:(id)a0;
- (void)setCollectionButtonImage:(id)a0;
- (void)setUnCollectionButtonImage:(id)a0;
- (void)showFavoriteToast;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
