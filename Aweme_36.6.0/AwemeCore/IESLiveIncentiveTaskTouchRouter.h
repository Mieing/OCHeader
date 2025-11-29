@class NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveIncentiveTaskTouchRouter : NSObject

@property (copy, nonatomic) NSString *incentivePanelUrlKey;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (copy, nonatomic) id /* block */ showBlock;

+ (id)appendQueryWithTaskCenterSchema:(id)a0 restTime:(double)a1;

- (void)handlePuzzlePanelWebViewShowNotification:(id)a0;
- (void)handleLivePopupDeallocNotification:(id)a0;
- (id)activityParam;
- (void)queryItemsInvalidCheck:(id)a0;
- (id)initWithRoomModel:(id)a0 componentContext:(id)a1 taskCenterShowBlock:(id /* block */)a2;
- (id)appendQueryURLWithPendantUrl:(id)a0 isLynx:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
