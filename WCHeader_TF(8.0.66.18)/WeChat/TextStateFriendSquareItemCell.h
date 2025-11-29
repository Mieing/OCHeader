@class TextStateModel, MMHeadImageView, MMUILabel;

@interface TextStateFriendSquareItemCell : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nicknameLabel;
@property (retain, nonatomic) TextStateModel *textState;
@property (nonatomic, getter=isRead) BOOL read;

+ (struct CGSize { double x0; double x1; })itemSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
