@class NSString, UIView, NSNumber, AWELiveQuitRoomModel;

@interface AWELiveRoomMessageContext : NSObject <AWELiveRoomMessageContextProtocol>

@property (retain, nonatomic) UIView *bizView;
@property (retain, nonatomic) NSNumber *multiLinkerDistance;
@property (nonatomic) BOOL leaveByCloseButton;
@property (nonatomic) BOOL leaveBySwipeExitRoom;
@property (nonatomic) long long mountedCellCount;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *isAppearing;
@property (retain, nonatomic) AWELiveQuitRoomModel *roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
