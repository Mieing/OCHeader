@class AWEProfileHeaderCommonIdentifyComponent_NEWAPI, AWEProfileHeaderIdContentComponent_NEWAPI, AWERLVirtualLabel, AWEProfileDualSeparableVirtualView;

@interface AWEProfileHeaderVerificationWithIdContentComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEProfileHeaderCommonIdentifyComponent_NEWAPI *identifyComponent;
@property (retain, nonatomic) AWEProfileHeaderIdContentComponent_NEWAPI *idContentComponent;
@property (retain, nonatomic) AWERLVirtualLabel *separatorVirtualView;
@property (retain, nonatomic) AWEProfileDualSeparableVirtualView *containerVirtualView;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void)updateComponentData:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;

@end
