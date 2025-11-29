@class NSString;

@interface AFDPlayRemoteAwemeItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long awemeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithItemID:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
