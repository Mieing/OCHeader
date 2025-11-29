@class MMUILabel, NSString, UIImageView, UIView, UIButton;
@protocol POICorrectionGuideViewDelegate;

@interface POICorrectionGuideView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *secTitleLabel;
@property (nonatomic) BOOL isPoiPrivated;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) NSString *addr;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *poiid;
@property (weak, nonatomic) id<POICorrectionGuideViewDelegate> poiDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)contentHeight;
- (void)confrimButtonClicked;
- (void).cxx_destruct;

@end
