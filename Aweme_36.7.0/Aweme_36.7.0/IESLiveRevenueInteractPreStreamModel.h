@class NSMutableDictionary, UIView;

@interface IESLiveRevenueInteractPreStreamModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (nonatomic) long long lynxClickEventType;
@property (nonatomic) BOOL shouldShowTeamTaskView;
@property (nonatomic) BOOL isAudioRoom;
@property (weak, nonatomic) UIView *preStreamContainer;
@property (weak, nonatomic) UIView *extendView;

- (void).cxx_destruct;
- (id)init;

@end
