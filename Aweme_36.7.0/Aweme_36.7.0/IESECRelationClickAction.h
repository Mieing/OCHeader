@class NSString;

@interface IESECRelationClickAction : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *jumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
