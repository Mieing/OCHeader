@class NSArray, NSString;

@interface AWEGDImageTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemInfoTotal;
@property (copy, nonatomic) NSArray *itemTabList;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemTabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
