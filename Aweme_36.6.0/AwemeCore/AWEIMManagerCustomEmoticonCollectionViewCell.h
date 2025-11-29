@class UIImageView, AWEIMSelectableStatusView, UIView, AWEIMEmoticonModel, UILongPressGestureRecognizer;
@protocol AWEIMManagerCustomEmoticonCollectionViewCellActionDelegate;

@interface AWEIMManagerCustomEmoticonCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *horizontalRightView;
@property (retain, nonatomic) UIView *verticalView;
@property (retain, nonatomic) AWEIMSelectableStatusView *selectableStatusView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIImageView *plusIconView;
@property (retain, nonatomic) AWEIMEmoticonModel *model;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isManaging;
@property (weak, nonatomic) id<AWEIMManagerCustomEmoticonCollectionViewCellActionDelegate> delegate;
@property (nonatomic) long long selectNumber;

+ (id)identifier;

- (void)p_didLongPressCell;
- (void)p_changeSelectStatus;
- (void)configWithModel:(id)a0 isAtLastColumn:(BOOL)a1 isPlusItem:(BOOL)a2;
- (void)setSelect:(BOOL)a0 animated:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
