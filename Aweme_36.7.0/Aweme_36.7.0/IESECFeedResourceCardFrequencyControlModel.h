@class NSString;

@interface IESECFeedResourceCardFrequencyControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long key;
@property (nonatomic) long long interval;
@property (nonatomic) long long triggerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
