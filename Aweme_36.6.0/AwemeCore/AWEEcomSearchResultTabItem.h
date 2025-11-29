@class NSString;

@interface AWEEcomSearchResultTabItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSString *sectionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
