@class AFDUserListGridPanelCellTextLayout, AFDUserListGridPanelCellBubbleLayout, AFDUserListGridPanelCellAvatarLayout;

@interface AFDUserListGridPanelCellLayoutModel : NSObject

@property (retain, nonatomic) AFDUserListGridPanelCellBubbleLayout *bubbleLayout;
@property (retain, nonatomic) AFDUserListGridPanelCellAvatarLayout *avatarLayout;
@property (retain, nonatomic) AFDUserListGridPanelCellTextLayout *textLayout;

+ (id)defaultLayout;

- (void).cxx_destruct;

@end
