@class NSString, NSArray;

@interface AWEEcomSearchUIText : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *darkColor;
@property (nonatomic) BOOL isBold;
@property (copy, nonatomic) NSArray *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
