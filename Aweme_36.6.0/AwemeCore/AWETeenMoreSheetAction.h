@class NSString, UIColor, UIImage;

@interface AWETeenMoreSheetAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cachedImageName;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageColor;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)a0 titleColor:(id)a1 image:(id)a2 imageColor:(id)a3 handler:(id /* block */)a4;
+ (id)actionWithTitle:(id)a0 titleColor:(id)a1 cachedImageName:(id)a2 imageColor:(id)a3 handler:(id /* block */)a4;
+ (id)actionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
