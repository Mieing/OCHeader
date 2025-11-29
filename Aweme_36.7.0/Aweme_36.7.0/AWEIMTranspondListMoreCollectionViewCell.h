@class NSString, UIImageView, UILabel, UIView;
@protocol AWEIMTranspondListMoreCellActionDelegate;

@interface AWEIMTranspondListMoreCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, AWEIMTranspondListMoreCollectionViewCellProtocol>

@property (retain, nonatomic) UIImageView *moreImgView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *iconBackView;
@property (weak, nonatomic) id<AWEIMTranspondListMoreCellActionDelegate> delegate;
@property (nonatomic) BOOL needEnlargeAvatarAndIconView;
@property (nonatomic) BOOL isFromSharePanel;
@property (nonatomic) BOOL isFromCommentSharePanel;
@property (nonatomic) BOOL isEcommerceRedPackShareIM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configWithIsHot:(BOOL)a0;
+ (id)identifier;

- (BOOL)p_shouldAdpatBigFontMode;
- (void)moreTapped:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
