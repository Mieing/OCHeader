@class UIImage, NSString;

@interface DVETextStackViewItemConfig : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *title;

+ (id)configWithIconImage:(id)a0 enable:(BOOL)a1;

- (void).cxx_destruct;

@end
