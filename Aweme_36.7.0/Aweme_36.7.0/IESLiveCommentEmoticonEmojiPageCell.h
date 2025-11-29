@class NSDictionary, NSArray, NSString, UICollectionView, HTSLiveImage, NSMutableArray, UILabel;
@protocol IESLiveCommentEmoticonPageViewDelegate;

@interface IESLiveCommentEmoticonEmojiPageCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, IESLiveCommentEmoticonPageViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *emoticonModels;
@property (retain, nonatomic) NSArray *recentEmoticonModels;
@property (retain, nonatomic) NSArray *activityEmoticonModels;
@property (copy, nonatomic) NSString *activityEmoticonName;
@property (retain, nonatomic) HTSLiveImage *activityEmoticonTag;
@property (nonatomic) BOOL enableFusionEmoji;
@property (retain, nonatomic) NSMutableArray *groupModels;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UILabel *guideTip;
@property (nonatomic) BOOL enableFusionTip;
@property (copy, nonatomic) NSString *fusionEmojiTipKey;
@property (retain, nonatomic) NSMutableArray *displayEmojiList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly, nonatomic) unsigned long long selectType;
@property (weak, nonatomic) id<IESLiveCommentEmoticonPageViewDelegate> delegate;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) double extraBottomInset;

- (void)didSetAttachingDIContextCallOnce;
- (void)needShowActivityEmoticon:(BOOL)a0;
- (void)needShowFusionEmoticon:(BOOL)a0;
- (void)showGuideTipViewIfNeed;
- (void)needShowLowPcuGuideChatEmoji:(BOOL)a0;
- (void)setUpInitial;
- (void)prepareModels;
- (void)setupGuideTipView;
- (id)defaultQuickEmoticonModels;
- (void)addGroupModel:(id)a0;
- (struct CGSize { double x0; double x1; })lowPcuGuideChatEmojiCellSize:(id)a0;
- (void)didClickEmoticon:(id)a0;
- (void)trackEmojiDidSelected:(id)a0 idx:(long long)a1 tab:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupCollectionView;

@end
