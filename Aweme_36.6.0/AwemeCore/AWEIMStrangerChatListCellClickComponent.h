@class NSString, AWEIMStrangerChatListViewControllerV2, NSIndexPath, AWEIMChatModel;

@interface AWEIMStrangerChatListCellClickComponent : AWEIMComponentBase <AWEIMCommonChatListCellClickInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) NSIndexPath *enterIndexPath;
@property (retain, nonatomic) AWEIMChatModel *enterChatModel;
@property (weak, nonatomic) AWEIMStrangerChatListViewControllerV2 *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

@end
