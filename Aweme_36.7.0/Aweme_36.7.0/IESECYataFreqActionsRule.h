@class NSString;

@interface IESECYataFreqActionsRule : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long min;
@property (nonatomic) long long max;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
