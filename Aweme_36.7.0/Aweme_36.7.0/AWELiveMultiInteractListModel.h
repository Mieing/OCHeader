@class NSArray, NSString;

@interface AWELiveMultiInteractListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *users;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
