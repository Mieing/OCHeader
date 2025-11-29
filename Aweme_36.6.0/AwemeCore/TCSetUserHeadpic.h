@class UIImage, NSString;

@interface TCSetUserHeadpic : TCAPIRequest

@property (retain, nonatomic) UIImage *paramImage;
@property (retain, nonatomic) NSString *paramFileName;

+ (id)dictionary;

- (void).cxx_destruct;

@end
