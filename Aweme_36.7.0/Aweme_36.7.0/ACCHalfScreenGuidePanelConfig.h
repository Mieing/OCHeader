@class UIColor, NSString, UIImage, NSAttributedString;

@interface ACCHalfScreenGuidePanelConfig : NSObject

@property (nonatomic) BOOL hasBackground;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSAttributedString *attributedContent;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) UIImage *placeholder;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) UIColor *buttonTitleColor;

- (void).cxx_destruct;

@end
