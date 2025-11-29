@class UIImage, NSString;

@interface AWETextStackViewItemConfig : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *starImage;
@property (retain, nonatomic) NSString *title;

+ (id)configWithIconImage:(id)a0 enable:(BOOL)a1;

- (void).cxx_destruct;

@end
