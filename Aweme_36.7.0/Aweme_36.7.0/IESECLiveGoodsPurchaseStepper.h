@class NSNumber, NSString, IESECLiveActionModel;

@interface IESECLiveGoodsPurchaseStepper : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cartNum;
@property (retain, nonatomic) IESECLiveActionModel *action;
@property (nonatomic) long long maskStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
