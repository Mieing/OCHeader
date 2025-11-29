@class NSString;

@interface AWENearbyInnerPushConfigDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long requestDelaySecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;


@end
