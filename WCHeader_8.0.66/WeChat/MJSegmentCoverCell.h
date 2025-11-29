@class UIImageView, UILabel, OMCBatchThumbnailProvider;

@interface MJSegmentCoverCell : MJSegmentCell

@property (nonatomic) long long taskID;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) OMCBatchThumbnailProvider *batchThumbnailProvider;

- (void)commonInit;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)requestImage;
- (void)requestImageFromSingleProvider;
- (void)requestImageFromBatchProvider;
- (void)cancelRequestImage;
- (void)cancelRequestImageFromSingleProvider;
- (void)cancelRequestImageFromBatchProvider;
- (void).cxx_destruct;

@end
