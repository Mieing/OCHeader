@class NSString;

@interface IESECOrderListTabItemUIConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double fontSize;
@property (nonatomic) double textVerticalInset;
@property (nonatomic) double textHorizontalInset;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
