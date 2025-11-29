@class UIFont, NSString, UIColor, UIImage;

@interface MMFinderLiveImageTextLabelParams : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSString *leftImageURL;
@property (nonatomic) double imageToText;
@property (nonatomic) struct CGSize { double width; double height; } leftImageSize;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *rightImage;

- (void).cxx_destruct;

@end
