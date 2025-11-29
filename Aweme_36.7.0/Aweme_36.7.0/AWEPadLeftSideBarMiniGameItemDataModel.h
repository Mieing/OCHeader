@class NSString;

@interface AWEPadLeftSideBarMiniGameItemDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *gameId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
