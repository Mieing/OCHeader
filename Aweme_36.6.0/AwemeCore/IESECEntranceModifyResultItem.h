@class NSString, NSArray;

@interface IESECEntranceModifyResultItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSArray *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initRemoveItemWithScene:(id)a0 keys:(id)a1;
- (id)initPutItemWithScene:(id)a0 keys:(id)a1;
- (void).cxx_destruct;

@end
