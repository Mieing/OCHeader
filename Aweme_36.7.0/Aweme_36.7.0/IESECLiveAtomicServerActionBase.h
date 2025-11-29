@class IESECLiveAtomicServerActionSKU, NSString, IESECLiveAtomicServerActionJump, IESECLiveAtomicServerActionDialog, IESECLiveAtomicServerActionBiz, IESECLiveActionQualityTracker, NSDictionary, IESECLiveAtomicServerActionOrder;

@interface IESECLiveAtomicServerActionBase : MTLModel <MTLJSONSerializing, IESECLiveAtomicServerActionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) IESECLiveAtomicServerActionDialog *dialog;
@property (retain, nonatomic) IESECLiveAtomicServerActionBiz *bizAction;
@property (retain, nonatomic) IESECLiveAtomicServerActionJump *jumpAction;
@property (retain, nonatomic) IESECLiveAtomicServerActionSKU *skuAction;
@property (retain, nonatomic) IESECLiveAtomicServerActionOrder *orderAction;
@property (retain, nonatomic) id goodsModel;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECLiveActionQualityTracker *actionQualityTracker;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
