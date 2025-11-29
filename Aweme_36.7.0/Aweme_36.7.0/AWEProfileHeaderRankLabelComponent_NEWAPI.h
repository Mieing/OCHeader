@class AWEProfileBillboardRankView, AWEProfileRankModel, AWEProfileHeaderVirtualView;

@interface AWEProfileHeaderRankLabelComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (retain, nonatomic) AWEProfileHeaderVirtualView *virtualView;
@property (weak, nonatomic) AWEProfileRankModel *rankModel;
@property (nonatomic) BOOL hasTrackedShowIdentifies;
@property (retain, nonatomic) AWEProfileBillboardRankView *rankView;

- (id)buildVirtualView:(id)a0;
- (void)updateComponentData:(id)a0;
- (void)configRankViewWith:(id)a0;
- (void).cxx_destruct;

@end
