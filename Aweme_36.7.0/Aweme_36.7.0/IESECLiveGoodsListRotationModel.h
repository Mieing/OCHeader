@class NSNumber, NSString;

@interface IESECLiveGoodsListRotationModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rotationType;
@property (retain, nonatomic) NSNumber *rotationLoopTimes;
@property (retain, nonatomic) NSNumber *rotationLoopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
