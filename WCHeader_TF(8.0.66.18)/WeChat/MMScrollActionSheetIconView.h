@class NSString, UIImageView, UIImage, MMUIButton, MMUILabel;

@interface MMScrollActionSheetIconView : MMScrollActionSheetItemView {
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
}

@property (retain, nonatomic) MMUIButton *iconButton;
@property (retain, nonatomic) UIImageView *highLightView;
@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) UIImage *cornerImg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;

+ (double)displayHeightForItem:(id)a0 width:(double)a1;
+ (double)displayHeightForItem:(id)a0 width:(double)a1 iconMargin:(double)a2;

- (id)initWithItem:(id)a0;
- (id)initWithItem:(id)a0 iconMargin:(double)a1;
- (void)highLight;
- (void)updateRedDot;
- (void)reloadItem:(id)a0;
- (void)reloadData;
- (void)onTaped;
- (void).cxx_destruct;

@end
