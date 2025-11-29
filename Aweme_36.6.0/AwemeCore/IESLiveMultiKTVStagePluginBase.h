@class UIView;
@protocol IESLiveMultiKTVStageControllerProtocol, IESLiveRoomService;

@interface IESLiveMultiKTVStagePluginBase : NSObject

@property (weak, nonatomic) id<IESLiveMultiKTVStageControllerProtocol> stageController;
@property (retain, nonatomic) UIView *stageContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL preparingForReuse;
@property (weak, nonatomic) id<IESLiveMultiKTVStageControllerProtocol> stageControllerInRoom;

- (id)initWithStageController:(id)a0;
- (void).cxx_destruct;

@end
