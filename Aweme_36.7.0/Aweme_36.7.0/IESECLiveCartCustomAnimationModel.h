@class IESECLiveShopCartServerAnimation, NSString, IESECLiveCartControlConfigModel;

@interface IESECLiveCartCustomAnimationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveShopCartServerAnimation *anim;
@property (retain, nonatomic) NSString *businessKey;
@property (retain, nonatomic) NSString *iconKey;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) IESECLiveCartControlConfigModel *control;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
