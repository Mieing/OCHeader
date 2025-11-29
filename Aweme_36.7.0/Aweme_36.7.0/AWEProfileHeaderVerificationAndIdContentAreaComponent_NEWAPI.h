@class NSArray, AWERLVirtualFlexView, AWEProfileHeaderVerificationWithIdContentComponent_NEWAPI;

@interface AWEProfileHeaderVerificationAndIdContentAreaComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSArray *commonComponentsArray;
@property (retain, nonatomic) AWEProfileHeaderVerificationWithIdContentComponent_NEWAPI *verificationWithIdContentComponent;
@property (retain, nonatomic) AWERLVirtualFlexView *containerVirtualView;
@property (nonatomic) BOOL hasTrackedShowIdentifies;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void)updateComponentData:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void)generateSubComponents;
- (void)trackIdentifiesShowIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
