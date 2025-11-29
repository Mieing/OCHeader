@class AFDUserListGridPanelCellAnimationModel, AFDUserListGridPanelCellBubbleModel, AFDUserListGridPanelCellAvatarModel, AWEUserModel, AFDUserListGridPanelCellTextModel;

@interface AFDUserListGridPanelCellModel : NSObject

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AFDUserListGridPanelCellBubbleModel *bubbleModel;
@property (retain, nonatomic) AFDUserListGridPanelCellAvatarModel *avatarModel;
@property (retain, nonatomic) AFDUserListGridPanelCellTextModel *textModel;
@property (retain, nonatomic) AFDUserListGridPanelCellAnimationModel *animationModel;

- (void).cxx_destruct;

@end
