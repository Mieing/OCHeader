@class IESECVideoPlayerView, IESECHeadVideoModel, IESECUIImageView;

@interface IESECCommentItemVideoCell : UICollectionViewCell

@property (retain, nonatomic) IESECVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) IESECHeadVideoModel *headVideoModel;
@property (retain, nonatomic) IESECUIImageView *flagImageView;

- (id)currentPlayerView;
- (void)updateMediaCellWithVideoModel:(id)a0 flagIcon:(id)a1;
- (void)updateMediaCellWithVideoModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
