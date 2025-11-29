@class NSString, UIColor;

@interface AWEUIPreviewConfig : NSObject

@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *viewName;
@property (copy, nonatomic) NSString *styleName;
@property (copy, nonatomic) id /* block */ styleView;
@property (copy, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;

@end
