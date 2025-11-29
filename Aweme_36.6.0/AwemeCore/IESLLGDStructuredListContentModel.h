@class NSString, NSArray;

@interface IESLLGDStructuredListContentModel : MTLModel <MTLJSONSerializing, IESLLGDComponentWrapperProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *steps;
@property (nonatomic) BOOL needIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long marginTop;
@property (nonatomic) long long marginBottom;

+ (id)stepsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
