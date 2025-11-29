@class NSString, NSArray;

@interface IESLLPOIDetailMallFilterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long optionType;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *optionValue;
@property (copy, nonatomic) NSArray *childOptions;
@property (copy, nonatomic) id /* block */ didClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)childOptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
