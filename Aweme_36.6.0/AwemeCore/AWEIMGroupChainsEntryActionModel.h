@class NSArray, NSString;

@interface AWEIMGroupChainsEntryActionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *addEntry;
@property (copy, nonatomic) NSArray *modifyEntry;
@property (copy, nonatomic) NSArray *deleteEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
