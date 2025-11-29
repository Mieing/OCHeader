@class IESLiveGuideToolBarItem;
@protocol IESLiveGuideToolBarProvider;

@interface IESLiveGuideTaskFragment : IESLiveGuideComponent

@property (retain, nonatomic) IESLiveGuideToolBarItem *taskToolbarItem;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (id)getTrackParamsWithItem:(id)a0;
- (id)trackClickParams:(id)a0;
- (void)p_trackEventWithEventName:(id)a0 noticeDot:(BOOL)a1 taskIds:(id)a2 source:(id)a3;
- (void)updateTaskList:(id)a0;
- (id)p_showToolbarNoticeDotIfNeedWithTaskList:(id)a0;
- (void).cxx_destruct;

@end
