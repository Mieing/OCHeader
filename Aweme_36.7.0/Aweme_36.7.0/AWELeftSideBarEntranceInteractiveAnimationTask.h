@class AWELeftSideBarAmbienceObject, AWELeftSideBarEntranceInteractiveAnimationView, AWELeftSideBarBasePresenter, AWEHomePageBubbleTask, NSString;

@interface AWELeftSideBarEntranceInteractiveAnimationTask : NSObject

@property (readonly, nonatomic) BOOL isValid;
@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) AWELeftSideBarAmbienceObject *ambienceObject;
@property (retain, nonatomic) AWELeftSideBarEntranceInteractiveAnimationView *animationView;
@property (retain, nonatomic) AWEHomePageBubbleTask *holdingTask;
@property (nonatomic) double showTime;
@property (copy, nonatomic) NSString *scrollBusinessId;
@property (nonatomic) BOOL needScroll;
@property (nonatomic) BOOL hasScroll;

- (void).cxx_destruct;

@end
