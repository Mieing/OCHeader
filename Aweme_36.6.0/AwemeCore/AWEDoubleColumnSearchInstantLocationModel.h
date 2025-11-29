@class NSString;

@interface AWEDoubleColumnSearchInstantLocationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonTextColor;
@property (copy, nonatomic) NSString *buttonSchema;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long showAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
