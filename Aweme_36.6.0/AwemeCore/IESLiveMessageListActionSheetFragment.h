@class NSString, NSMutableDictionary, NSMutableArray;

@interface IESLiveMessageListActionSheetFragment : IESLiveRoomComponent <IESLiveMessageListActionSheetRouter>

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) NSMutableArray *showItems;
@property (retain, nonatomic) NSMutableArray *syncUpdateItems;
@property (nonatomic) BOOL messageOperateEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)replyComment:(id)a0;
- (void)addActionSheetItem:(id)a0;
- (void)removeActionSheetItemWithType:(unsigned long long)a0;
- (void)showActionSheetWithNode:(id)a0 atCell:(id)a1;
- (void)addReplyActionSheetItem;
- (void)addOpenUserCardActionSheetItem;
- (void)updateShowItemsWithNode:(id)a0;
- (void)directActionWithNode:(id)a0;
- (void)trackClickCommentWithNode:(id)a0 onActionSheet:(BOOL)a1;
- (void)showActionSheetVCWithNode:(id)a0;
- (void)addItemsToSheet:(id)a0 withNode:(id)a1;
- (void)addItemType:(unsigned long long)a0 withNode:(id)a1 toSheet:(id)a2;
- (void).cxx_destruct;

@end
