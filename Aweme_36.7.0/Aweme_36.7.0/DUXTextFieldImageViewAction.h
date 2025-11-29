@class NSString, UIImageView, UIImage, UIView;

@interface DUXTextFieldImageViewAction : NSObject <DUXTextFieldContent>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithImage:(id)a0;
+ (id)actionWithImage:(id)a0 clickAction:(id /* block */)a1;

@end
