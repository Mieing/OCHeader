@class HTSEventContext;
@protocol IESLiveRoomService;

@interface IESLivePPOBusinessHideHandler : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) double hidePercent;
@property (nonatomic) BOOL accurateHide;
@property (nonatomic) long long hideStatus;
@property (nonatomic) long long blockStatus;

- (id)initWithDIContext:(id)a0 room:(id)a1 context:(id)a2;
- (void)hideAllBottomViewIfNeedWithPanel:(id)a0 panelHeight:(double)a1;
- (void)showAllBottomViewIfNeed;
- (void).cxx_destruct;

@end
