@class BDPCDDynamicCardUIPropsIconModel, BDPCDDynamicCardUIPropsTextModel;

@interface BDPCDDynamicCardUIStepperModel : BDPCDDynamicCardUIPropsModel

@property (retain, nonatomic) BDPCDDynamicCardUIPropsIconModel *iconModel;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsTextModel *primaryModel;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsTextModel *primaryAdditionalModel;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsTextModel *secondaryModel;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsTextModel *additionalModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
