@class NSString;

@interface IESECGoodsRitTagUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useCornerRadius;
@property (nonatomic) unsigned long long textSplitorStyle;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textBgColor;
@property (copy, nonatomic) NSString *textBorderColor;
@property (copy, nonatomic) NSString *secondTextColor;
@property (copy, nonatomic) NSString *secondTextBgColor;
@property (copy, nonatomic) NSString *secondTextBorderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
