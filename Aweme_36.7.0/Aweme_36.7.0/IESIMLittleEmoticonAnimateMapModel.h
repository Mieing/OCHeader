@class UIImage, UIFont, NSString;

@interface IESIMLittleEmoticonAnimateMapModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } emojiSize;
@property (nonatomic) struct CGSize { double width; double height; } animteSize;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *animateUrl;

- (void).cxx_destruct;

@end
