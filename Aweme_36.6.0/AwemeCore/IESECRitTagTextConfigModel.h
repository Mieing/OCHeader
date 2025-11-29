@class NSString, NSArray;

@interface IESECRitTagTextConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textBGColor;
@property (copy, nonatomic) NSString *textBorderColor;
@property (nonatomic) unsigned long long weight;
@property (copy, nonatomic) NSArray *radius;
@property (copy, nonatomic) NSArray *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
