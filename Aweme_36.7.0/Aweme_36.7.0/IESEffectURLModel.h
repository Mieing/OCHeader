@class NSString, NSArray;

@interface IESEffectURLModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSArray *originURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)URLList;
- (void).cxx_destruct;

@end
