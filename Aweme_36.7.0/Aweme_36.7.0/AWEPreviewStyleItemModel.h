@class NSString, UIColor;

@interface AWEPreviewStyleItemModel : NSObject

@property (copy, nonatomic) NSString *styleName;
@property (copy, nonatomic) id /* block */ styleDetaiView;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;

@end
