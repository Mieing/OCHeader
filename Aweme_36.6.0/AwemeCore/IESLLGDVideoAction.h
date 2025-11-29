@class NSArray, NSString;

@interface IESLLGDVideoAction : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *aweme_ids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
