@class NSString;

@interface IESECOrderBottomBarShowConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long notClickTimesForShown;
@property (nonatomic) double frozenDuration;
@property (nonatomic) double scrollDistance;
@property (nonatomic) double stayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
