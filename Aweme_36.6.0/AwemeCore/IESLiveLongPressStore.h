@class IESLiveLongPressViewModel, NSDictionary, IESLiveLongPressActionImpl, IESLiveLongPressAwemeStyleViewModel;
@protocol IESLiveRoomService;

@interface IESLiveLongPressStore : NSObject

@property (copy, nonatomic) NSDictionary *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveLongPressActionImpl *actionImpl;
@property (retain, nonatomic) IESLiveLongPressAwemeStyleViewModel *awemeStyleViewModel;
@property (retain, nonatomic) IESLiveLongPressViewModel *viewModel;
@property (nonatomic) BOOL inRoom;
@property (retain, nonatomic) NSDictionary *enterRoom;
@property (copy, nonatomic) id /* block */ triggerBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)dependencyInjection:(id)a0;
- (void)startBuildAwemeStyleLongPressPanel;
- (id)createPopupItemWithModels:(id)a0 imModels:(id)a1;
- (id)createPopupItem;
- (void)createViewModel;
- (void)configOperationModel;
- (id)createItem;
- (void).cxx_destruct;

@end
