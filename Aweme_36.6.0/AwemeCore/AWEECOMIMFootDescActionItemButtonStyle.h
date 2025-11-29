@class NSString, AWEECOMIMFootDescActionItemButtonTextStyle;

@interface AWEECOMIMFootDescActionItemButtonStyle : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEECOMIMFootDescActionItemButtonTextStyle *textStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
