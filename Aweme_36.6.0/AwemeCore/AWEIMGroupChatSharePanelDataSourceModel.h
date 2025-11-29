@class AWEIMMessageConversation, NSString, UICollectionView, UIViewController;
@protocol AWEIMSharePanelExtensionInterface, AWEIMGroupChatSharePanelConfigItemCellDelegate, AWEIMTranspondListViewControllerInterface;

@interface AWEIMGroupChatSharePanelDataSourceModel : NSObject <IESIMGroupChatSharePanelDataSourceModelProtocol>

@property (weak, nonatomic) id<AWEIMGroupChatSharePanelConfigItemCellDelegate> cellDelegate;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) id<AWEIMSharePanelExtensionInterface> extension;
@property (retain, nonatomic) UIViewController<AWEIMTranspondListViewControllerInterface> *transpondViewController;
@property (retain, nonatomic) UICollectionView *configCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
