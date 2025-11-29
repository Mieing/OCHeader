@class NSArray, NSString;

@interface IESECLiveToggleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
