@class UILabel, NSArray, MMFinderLivePageSheetNoticeConfig;

@interface MMFinderLivePageSheetNoticeView : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLivePageSheetNoticeConfig *config;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSArray *actionButtons;
@property (copy, nonatomic) id /* block */ disappearCallback;

- (id)initWithConfig:(id)a0;
- (void)initViews;
- (void)setupPageSheetConfig;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onActionButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
