@class NSString;

@interface IESLiveInteractCommonComponent : IESLiveInteractComponentBase <IESLiveChatRoomService>

@property (nonatomic) BOOL isLeaveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)showTextAnnounceToolPanel:(id)a0;
- (void)componentBindContext;
- (void)componentEnterRoom;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)componentLeaveRoom;
- (void)refreshTextAnnounceToolBarItem;
- (void)removeTextAnnounceToolBarItem;
- (void)addTextAnnounceToolBarItem;

@end
