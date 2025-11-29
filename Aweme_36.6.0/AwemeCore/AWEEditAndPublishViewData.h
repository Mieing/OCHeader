@class NSString, UIImage;

@interface AWEEditAndPublishViewData : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) Class buttonClass;
@property (retain, nonatomic) NSString *idStr;
@property (copy, nonatomic) id /* block */ extraConfigBlock;
@property (nonatomic) BOOL shouldShow;

+ (id)dataWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2 show:(BOOL)a3 actionBlock:(id /* block */)a4 buttonClass:(Class)a5 extraConfigBlock:(id /* block */)a6;
+ (id)dataWithTitle:(id)a0 imageName:(id)a1 idStr:(id)a2 actionBlock:(id /* block */)a3;
+ (id)dataWithTitle:(id)a0 imageName:(id)a1 actionBlock:(id /* block */)a2;
+ (id)dataWithTitle:(id)a0 imageName:(id)a1 idStr:(id)a2 actionBlock:(id /* block */)a3 buttonClass:(Class)a4;
+ (id)dataWithTitle:(id)a0 imageName:(id)a1 idStr:(id)a2 actionBlock:(id /* block */)a3 buttonClass:(Class)a4 extraConfigBlock:(id /* block */)a5;
+ (id)dataWithTitle:(id)a0 imageName:(id)a1 selectedImageName:(id)a2 idStr:(id)a3 actionBlock:(id /* block */)a4 buttonClass:(Class)a5 extraConfigBlock:(id /* block */)a6;
+ (id)dataWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2 actionBlock:(id /* block */)a3 buttonClass:(Class)a4 extraConfigBlock:(id /* block */)a5;

- (id)initWithTitle:(id)a0 imageName:(id)a1 selectedImageName:(id)a2 idStr:(id)a3 actionBlock:(id /* block */)a4 buttonClass:(Class)a5 extraConfigBlock:(id /* block */)a6;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)a0;

@end
