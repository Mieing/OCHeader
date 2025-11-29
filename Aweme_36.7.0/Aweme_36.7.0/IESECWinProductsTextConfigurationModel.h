@class NSString, IESECURLModel, IESECWinProductsTextStyleConfig, IESECWinProductsTextContainerMargins;

@interface IESECWinProductsTextConfigurationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double fontSize;
@property (nonatomic) double height;
@property (retain, nonatomic) IESECURLModel *image;
@property (nonatomic) double margin;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL newStyle;
@property (copy, nonatomic) NSString *subText;
@property (nonatomic) double subTextMargin;
@property (retain, nonatomic) IESECWinProductsTextStyleConfig *subTextStyle;
@property (retain, nonatomic) IESECWinProductsTextContainerMargins *containerMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
