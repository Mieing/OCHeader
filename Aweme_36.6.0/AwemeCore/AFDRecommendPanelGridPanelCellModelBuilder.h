@class AFDRecommendPanelItemModel;

@interface AFDRecommendPanelGridPanelCellModelBuilder : AFDUserListGridPanelCellBuilder

@property (retain, nonatomic) AFDRecommendPanelItemModel *model;

- (id)buildUserModel;
- (id)buildBubbleModel;
- (id)buildAvatarModel;
- (id)buildTextModel;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
