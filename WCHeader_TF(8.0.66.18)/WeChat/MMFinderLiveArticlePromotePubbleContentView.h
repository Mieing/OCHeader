@class FinderLivePromoteInfoListMpArticleInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveArticlePromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *anchorLabel;
@property (retain, nonatomic) FinderLivePromoteInfoListMpArticleInfo *articleInfo;

- (void)convertPromoteMsgInfo:(id)a0;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)a0;
- (void)onTapAction;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)layoutUI;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutAnchorLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
