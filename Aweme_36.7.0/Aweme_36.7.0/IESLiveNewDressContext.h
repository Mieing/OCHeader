@class HTSEventContext, HTSLiveUser, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveNewDressContext : NSObject

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) HTSLiveUser *user;

- (id)createLogExtraInfo;
- (void).cxx_destruct;

@end
