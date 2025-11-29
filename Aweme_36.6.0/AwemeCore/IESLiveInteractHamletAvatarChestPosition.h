@class NSDictionary, NSString;

@interface IESLiveInteractHamletAvatarChestPosition : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) double positionX;
@property (nonatomic) double positionY;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chestPositionFromCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)JSONKeyPathsByPropertyKey;


@end
