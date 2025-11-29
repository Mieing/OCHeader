@class UIImageView, NSArray, UIView;

@interface IESLiveGestureCategoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *selectedIndicator;
@property (retain, nonatomic) UIImageView *gestureImageView;
@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) BOOL categorySelected;
@property (nonatomic) BOOL subGesApplied;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) BOOL hideSeperator;
@property (nonatomic) BOOL needToShowRedDot;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
