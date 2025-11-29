@class UIColor, NSString, AWESearchSynthesisNovelToolItemView, UIImage;

@interface AWESearchSynthesisNovelToolItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *imageNormal;
@property (retain, nonatomic) UIImage *imageEnable;
@property (retain, nonatomic) UIImage *imageDarkNormal;
@property (retain, nonatomic) UIImage *imageDarkEnable;
@property (weak, nonatomic) AWESearchSynthesisNovelToolItemView *view;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIColor *titleColorInDark;
@property (nonatomic) struct CGSize { double width; double height; } fixedImageSize;
@property (nonatomic) long long badge;
@property (nonatomic) double viewAlpha;
@property (nonatomic) double viewAlphaInDarkMode;
@property (copy, nonatomic) id /* block */ immersionActionBlock;

+ (id)itemFromTitle:(id)a0 imageNormal:(id)a1 imageEnable:(id)a2 imageDarkNormal:(id)a3 imageDarkEnable:(id)a4 action:(id /* block */)a5;
+ (id)itemFromTitle:(id)a0 imageNormal:(id)a1 imageEnable:(id)a2 imageDarkNormal:(id)a3 imageDarkEnable:(id)a4 immersionAction:(id /* block */)a5;

- (void).cxx_destruct;

@end
