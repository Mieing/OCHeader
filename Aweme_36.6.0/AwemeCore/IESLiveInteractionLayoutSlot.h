@protocol IESLiveInteractUserModel, IESLiveLinkmicSession;

@interface IESLiveInteractionLayoutSlot : IESLiveInteractionLayoutUIObject

@property (nonatomic) unsigned long long viewIndex;
@property (nonatomic) long long seatIndex;
@property (nonatomic) long long serverSeatIndex;
@property (nonatomic) BOOL isMainSlot;
@property (nonatomic) BOOL isAnchorSlot;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (weak, nonatomic) id<IESLiveLinkmicSession> session;

- (void).cxx_destruct;

@end
