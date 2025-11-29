@class NSNumber, NSString;

@interface IESECLiveGoodsBargainFlipPrice : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *suffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
