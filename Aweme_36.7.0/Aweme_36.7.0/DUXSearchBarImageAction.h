@class UIButton, UIImage, NSString;

@interface DUXSearchBarImageAction : NSObject <DUXSearchBarAction>

@property (retain, nonatomic) UIButton *imageButton;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL disabled;
@property (nonatomic) unsigned long long imageActionSizeType;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) double actionPadding;
@property (nonatomic) double maxScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithImage:(id)a0 onClickBlock:(id /* block */)a1;
+ (id)actionWithImage:(id)a0 imageActionSizeType:(unsigned long long)a1 onClickBlock:(id /* block */)a2;
+ (id)actionWithImage:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;
+ (id)actionWithImage:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2;

- (void)updateImageConstraintsIfNeeded;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionView;
- (void)click;

@end
