@class UITapGestureRecognizer, UIImageView, IESLivePlaybackEmoticonModel;
@protocol IESLiveEmoticonResource;

@interface IESLivePlaybackBaseEmoticonImageCell : UICollectionViewCell

@property (nonatomic) long long imageScale;
@property (retain, nonatomic) id<IESLiveEmoticonResource> emoticonResource;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIImageView *emoticonImageView;
@property (retain, nonatomic) IESLivePlaybackEmoticonModel *emoticonModel;
@property (nonatomic) BOOL isDeleteCell;
@property (nonatomic) BOOL isEmptyCell;
@property (nonatomic) BOOL needTapGesture;
@property (copy, nonatomic) id /* block */ cellDidClicked;

+ (id)identifier;

- (void)didClickContentView;
- (void)resetStatus;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImageContentMode:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
