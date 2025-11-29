@class UIView, ACCSequencePreviewView, UIImage, NSString, AWEPublishBubbleWindow, AWEStudioComposerPublishCoverFeature, ACCRepositoryWorkspace, ACCSequencePreviewImageCache, NSMutableArray, NSObject;
@protocol ACCDUXPopoverInstance, AWEPublishSlidesTableViewCellDelegate, AWEPostPagePlayerService;

@interface AWEPublishSlidesTableViewCell : UITableViewCell <ACCSequencePreviewViewDataSource>

@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) id<AWEPostPagePlayerService> player;
@property (retain, nonatomic) NSMutableArray *itemInfoList;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL coverBindFirstImage;
@property (weak, nonatomic) ACCSequencePreviewImageCache *imageCache;
@property (retain, nonatomic) ACCSequencePreviewView *thumbnailListView;
@property (retain, nonatomic) UIView *guideContainerView;
@property (retain, nonatomic) AWEPublishBubbleWindow *bubbleWindow;
@property (retain, nonatomic) UIView<ACCDUXPopoverInstance> *firstAsCoverGuideView;
@property (nonatomic) BOOL isReedit;
@property (nonatomic) BOOL chooseCoverHiddenByDragging;
@property (nonatomic) long long minimumItem;
@property (nonatomic) BOOL isSmallState;
@property (retain, nonatomic) AWEStudioComposerPublishCoverFeature *featureConfig;
@property (weak, nonatomic) NSObject<AWEPublishSlidesTableViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)sequencePreviewNumberOfItems:(id)a0;
- (void)sequencePreview:(id)a0 dequeueCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)sequencePreview:(id)a0 canDeleteCellAtIndexPath:(id)a1 toast:(id *)a2;
- (void)configWithWorkspace:(id)a0 player:(id)a1;
- (void)updateCoverImage:(id)a0 needReload:(BOOL)a1;
- (void)moveItemFromIdx:(long long)a0 toIdx:(long long)a1 needReload:(BOOL)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isReedit:(BOOL)a2 minimumItem:(long long)a3 disableAddBtn:(BOOL)a4 disableLongAndPanGesture:(BOOL)a5 isImageAlbum:(BOOL)a6;
- (void)showFirstAsCoverGuide;
- (void)hiddenChooseCoverByDragAtIndex:(long long)a0;
- (void)removeItemWithUUID:(id)a0;
- (id)chooseCoverText;
- (long long)currentCoverIdx;
- (void)_dismissFirstAsCoverGuide;
- (void)_showFirstAsCoverGuide;
- (double)getTableViewDefaultOffset;
- (void)setIsSmallState:(BOOL)a0 animation:(BOOL)a1;
- (void).cxx_destruct;

@end
