@class ACCGradientView, NSString, UIView, CAKCircularProgressView, AWEMemoriesPlayerTileModel, AWEBinding, UIImageView, UILabel;

@interface AWEInTodayCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) int imageRequestID;
@property (copy, nonatomic) NSString *cacheIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *voiceOverView;
@property (retain, nonatomic) AWEBinding *volumeBinding;
@property (retain, nonatomic) CAKCircularProgressView *circularProgressView;
@property (retain, nonatomic) UIImageView *downloadErrorIndicator;

- (void)configWithModel:(id)a0;
- (void)didEndDisplay;
- (id)minuteFormatStringWithDuration:(id)a0;
- (id)secondsFormatStringWithDuration:(id)a0;
- (id)getFormatTimeStringWithDuration:(id)a0;
- (void)updateSelectedState:(unsigned long long)a0;
- (void)configCircularProgressView;
- (void)removeDownloadObserver;
- (void)addDownloadObserver;
- (void)setCoverImageWithModel:(id)a0;
- (void)downloadProgressHandler:(double)a0;
- (void)downloadCancelHandler:(double)a0;
- (void)downloadFailureHandler:(double)a0;
- (void)downloadSuccessHandler:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)coverImage;

@end
