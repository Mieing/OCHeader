@class AWEProfileHeaderIdContentComponent_NEWAPI, AWEProfileHeaderContactRemarkComponent_NEWAPI, AWEProfileHeaderNicknameComponent_NEWAPI, AWEProfileHeaderVerificationAndIdContentAreaComponent_NEWAPI, AWEProfileHeaderRankAreaComponent_NEWAPI, AWERLVirtualFlexView;

@interface AWEProfileHeaderNameAreaComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEProfileHeaderNicknameComponent_NEWAPI *nicknameComponent;
@property (retain, nonatomic) AWEProfileHeaderRankAreaComponent_NEWAPI *rankAreaComponent;
@property (retain, nonatomic) AWEProfileHeaderIdContentComponent_NEWAPI *idContentComponent;
@property (retain, nonatomic) AWEProfileHeaderContactRemarkComponent_NEWAPI *contactRemarkComponent;
@property (retain, nonatomic) AWEProfileHeaderVerificationAndIdContentAreaComponent_NEWAPI *identifyAndIdContentComponent;
@property (retain, nonatomic) AWERLVirtualFlexView *containerVirtualView;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void)updateComponentData:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;

@end
