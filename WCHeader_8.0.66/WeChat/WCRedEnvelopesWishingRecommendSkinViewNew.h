@class NSString, UIImageView, NSArray, UILabel, UIView;
@protocol WCRedEnvelopesWishingRecommendSkinViewNewDelegate;

@interface WCRedEnvelopesWishingRecommendSkinViewNew : UIView

@property (retain, nonatomic) UIView *sepLineView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *recommendSkinView;
@property (retain, nonatomic) UIView *recommendSkinView2;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSArray *recommendSkinList;
@property (weak, nonatomic) id<WCRedEnvelopesWishingRecommendSkinViewNewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 recommendSkinList:(id)a2;
- (void)setupViews;
- (void)layoutRecommendCoverView:(id)a0;
- (void)onClick;
- (BOOL)isSameList:(id)a0;
- (void)refreshWithSkinList:(id)a0;
- (void).cxx_destruct;

@end
