@class NSString, NSNumber;

@interface IESLiveLongPressItemConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *identity;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *itemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setItemType:(id)a0;
- (id)itemType;
- (void)setPriority:(id)a0;
- (id)priority;
- (void)setIdentity:(id)a0;
- (id)identity;

@end
