@class NSString, UIImageView, UILabel, UIButton;

@interface AWETeenPlayInteractionBaseButton : AWETeenPlayInteractionBaseElement <AWEBaseElementProtocol>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)p_layoutHorizontal;
- (void)p_layoutVertical;
- (void)p_singleTap;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (BOOL)isHorizontal;

@end
