@class NSNumber, NSString;

@interface IESECLiveInteractionVibeCheckModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *productIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
