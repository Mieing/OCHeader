@class NSString;

@interface IESECRelationTextConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *specialTextColor;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) long long fontType;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *specialBackgroundColor;
@property (nonatomic) long long overLengthStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
