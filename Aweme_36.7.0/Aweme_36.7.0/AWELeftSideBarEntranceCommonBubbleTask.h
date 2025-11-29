@class AWELeftSideBarBasePresenter, AWELeftSideBarAmbienceObject, AWEHPChannelBubbleTask;

@interface AWELeftSideBarEntranceCommonBubbleTask : NSObject

@property (retain, nonatomic) AWEHPChannelBubbleTask *holdingTask;
@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) AWELeftSideBarAmbienceObject *ambienceObject;
@property (nonatomic) BOOL isBusiness;

- (void).cxx_destruct;

@end
