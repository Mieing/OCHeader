@class UILabel, MJTimelineThumbnailView, MJSegmentCropInspectorViewModel;

@interface MJSegmentCropInspectorView : MJSegmentInspectorView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MJTimelineThumbnailView *thumbnailView;
@property (retain, nonatomic) MJSegmentCropInspectorViewModel *viewModel;

- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)didFinishCrop;
- (void)didCancelCrop;
- (void)updateResetButton;
- (void).cxx_destruct;

@end
