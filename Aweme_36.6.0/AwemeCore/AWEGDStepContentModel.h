@class NSString, NSArray;

@interface AWEGDStepContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *descTextList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
