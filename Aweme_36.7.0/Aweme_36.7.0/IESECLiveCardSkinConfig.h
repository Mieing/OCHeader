@class NSString, IESECLiveButtonUIConfig;

@interface IESECLiveCardSkinConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveButtonUIConfig *buyBtnSkin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
