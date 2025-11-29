@class MsgImageSquareThumbView, SimpleImgInfo;

@interface MsgImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MsgImageSquareThumbView *thumbView;
@property (retain, nonatomic) SimpleImgInfo *imgInfo;

- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
