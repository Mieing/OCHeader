@class MMUIImageView, NSString, MMUIView, MMUIButton, MMUILabel;

@interface WCFinderLiveRedPacketItemView : MMFinderLiveBottomTextButton

@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIView *imageBackgroundView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) MMUIImageView *imageView;

- (id)initWithImageName:(id)a0 title:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)actionClick;
- (void).cxx_destruct;

@end
