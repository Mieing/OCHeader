@class UIImage, NSString, UIFont;

@interface IESLivePlaybackDanmakuPopupMenuItem : IESLiveDynamicModel

@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *viewClass;

- (id)initWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithImage:(id)a0 target:(id)a1 action:(SEL)a2;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;

@end
