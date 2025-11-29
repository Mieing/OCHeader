@class NSString, IESECLiveConfigCountDownModel;

@interface IESECLiveGoodsCampaignProgressInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (retain, nonatomic) IESECLiveConfigCountDownModel *campaignCountDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
