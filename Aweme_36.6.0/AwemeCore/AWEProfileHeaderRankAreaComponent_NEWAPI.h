@class AWEProfileHeaderCraftsmanBillboardComponent_NEWAPI, AWEProfileHeaderRankComponent_NEWAPI, AWEProfileHeaderRankLabelComponent_NEWAPI;

@interface AWEProfileHeaderRankAreaComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEProfileHeaderCraftsmanBillboardComponent_NEWAPI *craftsComponent;
@property (retain, nonatomic) AWEProfileHeaderRankLabelComponent_NEWAPI *rankLabelComponent;
@property (retain, nonatomic) AWEProfileHeaderRankComponent_NEWAPI *rankComponent;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;

@end
