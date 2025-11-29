@class UIColor, NSString, NSArray, IESECURLModel;

@interface IESECGoodsCouponTagButtonConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *themeColor;
@property (copy, nonatomic) NSString *tagHeader;
@property (copy, nonatomic) NSString *tagHeaderBGColor;
@property (copy, nonatomic) NSString *tagIcon;
@property (copy, nonatomic) NSString *tagContentBGColor;
@property (copy, nonatomic) NSString *tagContent;
@property (copy, nonatomic) NSString *dashLineColor;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL useTagArrowIcon;
@property (retain, nonatomic) IESECURLModel *imageButton;

- (void).cxx_destruct;

@end
