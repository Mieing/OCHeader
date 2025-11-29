@class NSString, UIColor;

@interface GCInteractQuickActionModel : NSObject

@property (retain, nonatomic) NSString *svgImgStr;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ touchBlock;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;

@end
