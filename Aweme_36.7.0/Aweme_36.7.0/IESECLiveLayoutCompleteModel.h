@class NSArray, NSNumber, NSString;

@interface IESECLiveLayoutCompleteModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *elements;
@property (retain, nonatomic) NSNumber *layoutHeight;
@property (nonatomic) long long layoutStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
