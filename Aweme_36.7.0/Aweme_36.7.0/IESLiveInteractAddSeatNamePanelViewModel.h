@class HTSLiveLinkmicPositionItem, HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractAddSeatNamePanelViewModel : NSObject <IESLiveInteractiveAddSeatNameViewModel>

@property (retain, nonatomic) HTSLiveLinkmicPositionItem *positionItem;
@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (readonly, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long seatIndex;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (readonly, copy, nonatomic) NSString *oldSeatName;
@property (readonly, nonatomic) long long seatOffset;
@property (nonatomic) BOOL isEqual;
@property (nonatomic) BOOL isAdmin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)trackEditSeatParams;
- (void)onClickOKWithSeatName:(id)a0 completion:(id /* block */)a1;
- (id)initWithSeatIndex:(long long)a0 userModel:(id)a1 room:(id)a2 eventContext:(id)a3;
- (void).cxx_destruct;

@end
