@class NSArray, NSString;

@interface IESECMultiGradientLongTitleElement : MTLModel <MTLJSONSerializing>

@property (nonatomic) double space;
@property (nonatomic) long long leadingSpace;
@property (copy, nonatomic) NSArray *gradientLongTitleElementList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gradientLongTitleElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
