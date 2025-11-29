@class NSString;

@interface IESECGoodsRitTagColorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textBackgroundColor;
@property (copy, nonatomic) NSString *textBackgroundColors;
@property (copy, nonatomic) NSString *recommendTextColor;
@property (copy, nonatomic) NSString *recommendTextBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
