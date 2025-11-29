@class IESLiveInteractReplacePanelViewModel, NSArray, HTSEventContext, NSString, NSDictionary, HTSLiveLinkmicPositionItem;
@protocol IESLiveInteractUserModel, IESLiveRoomService;

@interface IESLiveInteractiveEditSeatPanelViewModel : NSObject <IESLiveInteractiveSheetViewModel>

@property (nonatomic) long long seatIndex;
@property (nonatomic) BOOL isLock;
@property (nonatomic) BOOL isEqual;
@property (nonatomic) long long panelType;
@property (retain, nonatomic) HTSLiveLinkmicPositionItem *positionItem;
@property (retain, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (readonly, copy, nonatomic) NSArray *titleArray;
@property (readonly, copy, nonatomic) NSArray *cellClickBlockArray;
@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (readonly, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) IESLiveInteractReplacePanelViewModel *replaceModel;
@property (readonly, nonatomic) long long seatOffset;
@property (nonatomic) BOOL isAdmin;
@property (readonly, copy, nonatomic) NSString *oldSeatName;
@property (readonly, copy, nonatomic) NSDictionary *trackEditSeatParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableBigPartyLayout:(id)a0;

- (void)didSetAttachingDIContext;
- (void)clickCancelButton;
- (id)popupItem;
- (id)initWithSeatIndex:(long long)a0 isLock:(BOOL)a1 isEqual:(BOOL)a2 room:(id)a3 userModel:(id)a4 eventContext:(id)a5;
- (BOOL)currentLayoutEnableEditSeatName;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)title;

@end
