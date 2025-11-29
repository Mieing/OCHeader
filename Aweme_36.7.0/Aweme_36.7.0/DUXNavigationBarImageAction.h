@class NSString, UIImage, DUXNavigationBarConfigModel, UIButton;

@interface DUXNavigationBarImageAction : NSObject <IESLLNavigationBarImageAction, DUXNavigationBarAction>

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double x0; double x1; } actionSize;
@property (nonatomic) double actionPadding;
@property (nonatomic) long long enlargeType;
@property (nonatomic) double maxScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIButton *imageButton;
@property (retain, nonatomic) DUXNavigationBarConfigModel *uiConfig;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL disabled;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) double actionPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithImage:(id)a0 onClickBlock:(id /* block */)a1;
+ (id)adaptiveActionWithImage:(id)a0 index:(long long)a1 onClickBlock:(id /* block */)a2;
+ (id)actionWithImage:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;
+ (id)actionWithImage:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2;
+ (double)adaptiveActionPaddingWithIndex:(long long)a0;
+ (id)actionWithImage:(id)a0 index:(long long)a1 onClickBlock:(id /* block */)a2;
+ (double)actionPaddingWithIndex:(long long)a0;

- (void)setImageWithUrl:(id)a0 defaultImage:(id)a1;
- (void)updateImageConstraintsIfNeeded;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionView;
- (void)click;

@end
