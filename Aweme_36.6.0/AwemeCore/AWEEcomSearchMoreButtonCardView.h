@class NSString, UIImageView, UILabel, UIView;

@interface AWEEcomSearchMoreButtonCardView : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (BOOL)hasMoreWithViewModel:(id)a0;

- (void)configUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
