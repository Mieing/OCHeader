@class NSNumber, NSString;

@interface IESECLiveGoodsPurchaseStepperModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL buttonDisable;
@property (retain, nonatomic) NSNumber *cartNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
