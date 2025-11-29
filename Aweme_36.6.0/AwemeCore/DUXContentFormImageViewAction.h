@class UIImageView, UIImage, NSString;

@interface DUXContentFormImageViewAction : NSObject <DUXContentFormContent>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) double maxScale;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithImage:(id)a0;
+ (id)actionWithImage:(id)a0 clickAction:(id /* block */)a1;

- (void)didClickContentView;
- (id)duxContentForm_view;
- (void).cxx_destruct;

@end
