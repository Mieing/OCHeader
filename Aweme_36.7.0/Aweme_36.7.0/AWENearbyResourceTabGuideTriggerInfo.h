@class NSString;

@interface AWENearbyResourceTabGuideTriggerInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long triggerType;
@property (nonatomic) long long triggerNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
