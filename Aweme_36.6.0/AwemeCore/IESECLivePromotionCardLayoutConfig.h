@class NSString, IESECLiveLayoutConfigModel;

@interface IESECLivePromotionCardLayoutConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveLayoutConfigModel *cardLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *bgViewLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *coverLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *titleLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *priceLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *buttonLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *addCartButtonLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *stepperIconLayout;
@property (retain, nonatomic) IESECLiveLayoutConfigModel *stepperLabelLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
