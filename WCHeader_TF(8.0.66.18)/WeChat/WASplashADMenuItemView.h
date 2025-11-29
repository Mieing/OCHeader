@class NSDictionary, UIImageView, MMWebImageView, MMUIButton, MMUILabel;
@protocol WASplashADMenuItemViewDelegate;

@interface WASplashADMenuItemView : MMUIView

@property (retain, nonatomic) NSDictionary *itemDict;
@property (retain, nonatomic) MMUILabel *mainTitleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MMWebImageView *logoImageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) MMUIButton *button;
@property (weak, nonatomic) id<WASplashADMenuItemViewDelegate> delegate;

- (id)initWithMenuItemDict:(id)a0;
- (void)layoutSubviews;
- (void)onClicked:(id)a0;
- (void).cxx_destruct;

@end
