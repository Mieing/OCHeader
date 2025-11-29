@class NSString, NSDictionary;

@interface IESECTabKitTrackEventModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *onceKey;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
