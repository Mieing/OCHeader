@class MMWebImageView, MMFinderLiveTask, UIImage, UILabel, UITableView, FinderGetLiveInfoResp_LiveCoverImage, UIView, UIScrollView, FinderLiveInfo, NSString, RichTextView, MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic, MMLiveScrollGradientMaskingView;
@protocol MMFinderLiveCompleteViewReplaySettingsStrategy;

@interface MMFinderLiveCompleteViewReplaySettingsPageSheet : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMPageSheetBottomViewDelegate, ILinkEventExt>

@property (retain, nonatomic) MMLiveScrollGradientMaskingView *scrollMaskingView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descriptionLabel;
@property (retain, nonatomic) UIView *coverImageContainerView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UIView *coverImageHintLabelShadingView;
@property (retain, nonatomic) UILabel *coverImageHintLabel;
@property (retain, nonatomic) UITableView *optionsTableView;
@property (weak, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) FinderLiveInfo *finderLiveInfo;
@property (retain, nonatomic) NSString *commentVisibilityOptionWording;
@property (nonatomic) BOOL replayHighlightCapable;
@property (retain, nonatomic) id<MMFinderLiveCompleteViewReplaySettingsStrategy> strategy;
@property (retain, nonatomic) MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic *coverPickingLogic;
@property (retain, nonatomic) UIImage *selectedCoverImage;
@property (retain, nonatomic) FinderGetLiveInfoResp_LiveCoverImage *liveCover;
@property (copy, nonatomic) id /* block */ commitBlock;
@property (copy, nonatomic) id /* block */ commentConvertActionBlock;
@property (copy, nonatomic) id /* block */ replayHighlightActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0 finderLiveInfo:(id)a1 commentVisibilityOptionWording:(id)a2 replayHighlightCapability:(BOOL)a3 liveCover:(id)a4;
- (void)pageSheetDidShow;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onCoverImageTapped;
- (void)initializeComponents;
- (void)initializeStrategy;
- (void)updateCoverImage;
- (void)reportDataWithType:(unsigned long long)a0 action:(unsigned long long)a1;
- (void).cxx_destruct;

@end
