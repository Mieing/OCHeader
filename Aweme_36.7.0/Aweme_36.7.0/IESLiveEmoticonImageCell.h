@class IESLiveEmoticonModel, UIImageView, UIView, UITapGestureRecognizer;
@protocol IESLiveEmoticonResource;

@interface IESLiveEmoticonImageCell : UICollectionViewCell

@property (nonatomic) long long imageScale;
@property (retain, nonatomic) id<IESLiveEmoticonResource> emoticonResource;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) UIView *customEmojiView;
@property (retain, nonatomic) UIImageView *emoticonImageView;
@property (retain, nonatomic) IESLiveEmoticonModel *emoticonModel;
@property (nonatomic) BOOL isDeleteCell;
@property (nonatomic) BOOL isEmptyCell;
@property (nonatomic) BOOL needTapGesture;
@property (copy, nonatomic) id /* block */ cellDidClicked;

+ (id)identifier;

- (void)didClickContentView;
- (void)resetStatus;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
