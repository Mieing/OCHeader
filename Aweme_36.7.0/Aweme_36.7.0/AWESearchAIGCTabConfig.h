@class NSArray, NSString;

@interface AWESearchAIGCTabConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *switcherButtons;
@property (copy, nonatomic) NSString *switcherButtonFoldId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)switcherButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
