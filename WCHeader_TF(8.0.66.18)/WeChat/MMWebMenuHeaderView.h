@class UIButton, NSString, UIImageView, MMWebImageView, UIView, MMUILabel;
@protocol MMWebMenuHeaderViewDelegate;

@interface MMWebMenuHeaderView : MMUIView

@property (retain, nonatomic) NSString *brandNanme;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *headerButton;
@property (retain, nonatomic) UIView *seperator;
@property (weak, nonatomic) id<MMWebMenuHeaderViewDelegate> menuHeaderDelegate;

- (id)initWithBrandName:(id)a0 headImageUrl:(id)a1;
- (double)contentViewHeight;
- (double)contentViewWidth;
- (void)initView;
- (void)layoutSubviews;
- (void)onViewClick;
- (void).cxx_destruct;

@end
