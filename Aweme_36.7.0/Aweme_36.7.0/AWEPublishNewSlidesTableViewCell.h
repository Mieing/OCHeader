@class UIView, ACCSequencePreviewView, UIImage, NSString, AWEPublishBubbleWindow, AWEPublishImageAlbumLargePreviewView, AWEStudioComposerPublishCoverFeature, NSMutableDictionary, ACCRepositoryWorkspace, ACCSequencePreviewImageCache, NSMutableArray, NSObject;
@protocol ACCDUXPopoverInstance, AWEPublishNewSlidesTableViewCellDelegate, AWEPostPagePlayerService;

@interface AWEPublishNewSlidesTableViewCell : UITableViewCell <ACCSequencePreviewViewDataSource, AWEPublishImageAlbumLargePreviewViewDataSource>

@property (nonatomic) unsigned long long previewType;
@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) id<AWEPostPagePlayerService> player;
@property (retain, nonatomic) NSMutableArray *itemInfoList;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL coverBindFirstImage;
@property (weak, nonatomic) ACCSequencePreviewImageCache *imageCache;
@property (retain, nonatomic) ACCSequencePreviewView *thumbnailListView;
@property (retain, nonatomic) AWEPublishImageAlbumLargePreviewView *largePreviewListView;
@property (retain, nonatomic) UIView *guideContainerView;
@property (retain, nonatomic) AWEPublishBubbleWindow *bubbleWindow;
@property (retain, nonatomic) UIView<ACCDUXPopoverInstance> *firstAsCoverGuideView;
@property (nonatomic) BOOL isReedit;
@property (nonatomic) BOOL chooseCoverHiddenByDragging;
@property (nonatomic) long long minimumItem;
@property (nonatomic) BOOL disableAddBtn;
@property (nonatomic) BOOL disableLongAndPanGesture;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL isSmallState;
@property (retain, nonatomic) AWEStudioComposerPublishCoverFeature *featureConfig;
@property (retain, nonatomic) UIView *slidesTableViewContentView;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) long long currentSelectedIndexSignal;
@property (retain, nonatomic) NSString *currentSelectedUUID;
@property (weak, nonatomic) NSObject<AWEPublishNewSlidesTableViewCellDelegate> *delegate;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (copy, nonatomic) id /* block */ endEditingThroughGestureBlock;
@property (readonly, nonatomic) BOOL isInputState;
@property (nonatomic) BOOL isUserSelected;
@property (nonatomic) BOOL isJxPostPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (long long)sequencePreviewNumberOfItems:(id)a0;
- (void)sequencePreview:(id)a0 dequeueCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)sequencePreview:(id)a0 canDeleteCellAtIndexPath:(id)a1 toast:(id *)a2;
- (id)aACCMidVideoCreationProtocol;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isReedit:(BOOL)a2 minimumItem:(long long)a3 disableAddBtn:(BOOL)a4 disableLongAndPanGesture:(BOOL)a5 type:(unsigned long long)a6 workspace:(id)a7;
- (void)configWithWorkspace:(id)a0 player:(id)a1;
- (void)updateCoverImage:(id)a0 needReload:(BOOL)a1;
- (void)moveItemFromIdx:(long long)a0 toIdx:(long long)a1 needReload:(BOOL)a2;
- (void)updateCoverImage:(id)a0 needReload:(BOOL)a1 animated:(BOOL)a2;
- (void)refreshSelectItemWithIndex:(long long)a0;
- (void)removeItemWithUUID:(id)a0 beforeDragIndex:(long long)a1;
- (void)hiddenChooseCoverByDragAtIndex:(long long)a0;
- (id)chooseCoverText;
- (long long)largePreviewViewNumberOfItems:(id)a0;
- (void)largePreviewView:(id)a0 dequeueCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)largePreviewViewDidScrollToIndex:(id)a0;
- (BOOL)shouldShowLargePreviewView;
- (BOOL)shouldShowSequencePreviewView;
- (struct CGSize { double x0; double x1; })getLargePreviewItemSize;
- (void)endEditingThroughGesture;
- (id)getLargePreviewViewConfig;
- (id)getSequencePreviewViewConfig;
- (unsigned long long)typeWithPublishViewModel:(id)a0;
- (long long)indexWithUUID:(id)a0;
- (void)updateVisibleCellsWithCoverImageAnimated:(id)a0;
- (long long)currentCoverIdx;
- (BOOL)shouldShowChooseCoverForIdx:(long long)a0;
- (void)trackSlidesAction:(id)a0;
- (void)largePreviewView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)_dismissFirstAsCoverGuide;
- (double)visibleCellHeight;
- (void)setIsInputState:(BOOL)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
