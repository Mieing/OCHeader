@class HTSEventContext, NSString, IESLiveTimeNoticeViewModel, IESLiveOpenLiveBroadcastConfig;

@interface IESLiveTimeScheduleViewModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) IESLiveTimeNoticeViewModel *timeNoticeViewModel;
@property (retain, nonatomic) IESLiveOpenLiveBroadcastConfig *config;

- (void).cxx_destruct;

@end
