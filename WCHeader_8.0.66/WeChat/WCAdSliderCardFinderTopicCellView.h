@class WCAdFinderTopicResInfo, NSString, MMUIView, MMWebImageView, MMUILabel;

@interface WCAdSliderCardFinderTopicCellView : WCAdSliderCardCellView <MMWebImageViewDelegate>

@property (readonly, nonatomic) WCAdFinderTopicResInfo *finderTopicResInfo;
@property (retain, nonatomic) MMWebImageView *avatarView;
@property (retain, nonatomic) MMUILabel *nicknameView;
@property (retain, nonatomic) MMUILabel *durationView;
@property (retain, nonatomic) MMUIView *infoBarView;
@property (retain, nonatomic) MMUIView *infoDividerView;
@property (retain, nonatomic) MMUILabel *tagView;
@property (retain, nonatomic) MMUILabel *descView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCellContentViewMaskPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createContentContainer;
- (void)initDetailView;
- (void)initHeadView;
- (void)initInfoView;
- (void)updateContentUI;
- (void)adjustLayout;
- (id)fetchReportItem;
- (BOOL)shouldDownloadImageUseCDN;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
