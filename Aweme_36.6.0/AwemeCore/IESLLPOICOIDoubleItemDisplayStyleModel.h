@class NSString;

@interface IESLLPOICOIDoubleItemDisplayStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fontColorHEX;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *backgroundColorHEX;
@property (copy, nonatomic) NSString *fontWeight;
@property (copy, nonatomic) NSString *layoutGravity;
@property (nonatomic) double marginLeft;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isCircle;
@property (copy, nonatomic) NSString *borderColorHex;
@property (nonatomic) double borderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
