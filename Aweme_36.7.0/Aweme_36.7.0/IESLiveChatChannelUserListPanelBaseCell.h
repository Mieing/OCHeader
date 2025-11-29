@class NSString, IESLiveChatChannelUserListPanelCellModel;

@interface IESLiveChatChannelUserListPanelBaseCell : UITableViewCell <IESLiveChatChannelUserListPanelCellView>

@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
