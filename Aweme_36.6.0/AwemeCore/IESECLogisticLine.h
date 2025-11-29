@class NSArray, NSString, NSNumber;

@interface IESECLogisticLine : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *logisticItems;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSNumber *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logisticItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
