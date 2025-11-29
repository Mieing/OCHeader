@class IESLiveTimorLiveStreamStatusView, IESLiveTimorLiveStreamStatusStore;

@interface IESLiveTimorLiveStreamStatusFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveTimorLiveStreamStatusStore *store;
@property (retain, nonatomic) IESLiveTimorLiveStreamStatusView *statusRemindView;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)timorLiveStatusEnableWithRoom:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)bindXLiveObserveActions;
- (void)changeStatusRemindViewStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
