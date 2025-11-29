@class NSString;

@interface AWENearbyC2AutoPlayModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableAutoPlay;
@property (nonatomic) long long autoPlayAffectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
