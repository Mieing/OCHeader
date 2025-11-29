@class FinderLivePromoteInfoRedPacketCover_PromoteRedPacketCoverInfo, MMWebImageView, MMUIButton, MMUILabel;

@interface MMFinderLiveHonCoverPromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *anchorLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) FinderLivePromoteInfoRedPacketCover_PromoteRedPacketCoverInfo *model;
@property (nonatomic) BOOL received;
@property (nonatomic) BOOL isAnchor;

+ (BOOL)isCanShowHonCover:(id)a0 liveTask:(id)a1;
+ (id)getNewCoverInfoWithBuffer:(id)a0;
+ (id)getCacheInfoWithList:(id)a0 model:(id)a1 liveTask:(id)a2;

- (void)convertPromoteMsgInfo:(id)a0;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCoverInfoWithBuffer:(id)a0;
- (id)getRedPacketWithModel:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)layoutUI;
- (void)layoutActionBtn;
- (id)getCacheLiveHonCoverList;
- (void)cacheLiveHonCoverInfo:(id)a0;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutAnchorLabel;
- (void)updateLabelsOriginY;
- (void)actionButtonClick:(id)a0;
- (void)onTapAction;
- (void)addGestures;
- (void)handleSingleTapGesture:(id)a0;
- (void)closeWebviewClick;
- (void)updateRespList:(id)a0;
- (void)updateActionButton:(BOOL)a0 full:(unsigned int)a1;
- (void).cxx_destruct;

@end
