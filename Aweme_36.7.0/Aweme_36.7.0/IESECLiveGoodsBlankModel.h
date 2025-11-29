@class NSString, IESECLiveActionModel;

@interface IESECLiveGoodsBlankModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveActionModel *pressAction;
@property (retain, nonatomic) IESECLiveActionModel *longPressAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
