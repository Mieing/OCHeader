@class NSString, NSArray, UICollectionView, IESLiveCommentContext, NSSet, IESLiveGradientView, NSMutableArray;
@protocol IESLiveCommentEmojiResourceManager;

@interface IESLiveCommentWidgetQuickEmojiView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *quickEmoticonModels;
@property (nonatomic) double itemSpacing;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) IESLiveGradientView *emojiMaskView;
@property (nonatomic) double quickEmojiViewWidth;
@property (nonatomic) BOOL widthEnoughContainOneActivityEmoji;
@property (nonatomic) double leftWidthToContainNormalEmoji;
@property (retain, nonatomic) id<IESLiveCommentEmojiResourceManager> emojiResourceManager;
@property (retain, nonatomic) IESLiveCommentContext *commentContext;
@property (nonatomic) BOOL supportDisplayActivityEmoji;
@property (retain, nonatomic) NSMutableArray *displayEmojiList;
@property (nonatomic) BOOL hasLowPcuGuideChatEmoji;
@property (retain, nonatomic) NSSet *exposedEmojiIndexPaths;
@property (nonatomic) BOOL scrollViewWillDecelerate;
@property (nonatomic) BOOL supportLowPcuGuideChatEmoji;
@property (copy, nonatomic) id /* block */ didSeleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupMask;
- (void)prepareModels;
- (id)defaultQuickEmoticonModels;
- (struct CGSize { double x0; double x1; })lowPcuGuideChatEmojiCellSize:(id)a0;
- (id)initWithDIContext:(id)a0 commentContext:(id)a1 activityEmoji:(BOOL)a2 lowPcuGuideChatEmoji:(BOOL)a3;
- (struct CGSize { double x0; double x1; })activityEmojiCellSize:(id)a0;
- (long long)normalEmojiCountInWidth:(double)a0;
- (void)setupQuickEmojiView;
- (void)quickEmojiShowed;
- (void)setupQuickEmojiViewV11;
- (void)prepareModelsV11;
- (void)recordExposedEmojis;
- (void)trackQuickEmojiViewSlideWithExposedEmojis:(id)a0;
- (id)initWithWidth:(double)a0 diContext:(id)a1 commentContext:(id)a2 activityEmoji:(BOOL)a3 lowPcuGuideChatEmoji:(BOOL)a4;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupView;

@end
