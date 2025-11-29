@class NSString, UIImage;

@interface IESECViewControllerEmptyPageConfig : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *informativeText;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *primaryButtonTitle;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ customImageViewGenerator;

- (id)iesec_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iesec_emptyPageEdgeInsets;
- (void).cxx_destruct;

@end
