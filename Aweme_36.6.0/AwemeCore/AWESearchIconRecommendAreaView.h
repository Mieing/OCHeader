@class AWESearchMerchandiseIconRecommendAreaStruct, UIImageView, UILabel, UIView;

@interface AWESearchIconRecommendAreaView : UIView

@property (retain, nonatomic) AWESearchMerchandiseIconRecommendAreaStruct *iconRecommendArea;
@property (retain, nonatomic) UILabel *tagRecommend;
@property (retain, nonatomic) UILabel *mainInfo;
@property (retain, nonatomic) UILabel *extraInfo;
@property (retain, nonatomic) UIImageView *KOLAvatar;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UIImageView *arrowIcon;

- (void)configBGColor;
- (id)truncateText:(id)a0 toWidth:(double)a1 withAttributes:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
