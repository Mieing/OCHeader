@class UILabel, UIImageView, UIButton;

@interface MMFinderLiveNoticeCreateHintPageSheet : MMFinderLiveDragBarPageSheet

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ onCreateNotice;

- (id)init;
- (void)setupPageSheetConfig;
- (void)initViews;
- (BOOL)useCompactLayoutPadding;
- (void)layoutSubviews;
- (void)onConfirm;
- (void).cxx_destruct;

@end
