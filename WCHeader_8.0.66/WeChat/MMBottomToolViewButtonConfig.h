@class NSString, UIImage;

@interface MMBottomToolViewButtonConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL onClickAction;
@property (retain, nonatomic) UIImage *iconImg;
@property (nonatomic) BOOL isIconLeft;

- (id)initConfigWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void).cxx_destruct;

@end
