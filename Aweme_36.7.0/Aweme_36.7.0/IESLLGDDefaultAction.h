@class NSArray, NSString;

@interface IESLLGDDefaultAction : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *images;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
