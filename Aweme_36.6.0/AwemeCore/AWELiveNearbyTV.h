@class NSString;

@interface AWELiveNearbyTV : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isIdle;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
