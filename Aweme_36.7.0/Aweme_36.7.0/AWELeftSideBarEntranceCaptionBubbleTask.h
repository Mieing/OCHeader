@class AWELeftSideBarAmbienceObject, AWEHPChannelCaptionBubbleTask, AWELeftSideBarBasePresenter, NSString;

@interface AWELeftSideBarEntranceCaptionBubbleTask : NSObject

@property (retain, nonatomic) AWEHPChannelCaptionBubbleTask *holdingTask;
@property (weak, nonatomic) AWELeftSideBarAmbienceObject *ambienceObject;
@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (nonatomic) BOOL isBusiness;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *businessSubId;
@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) double showTime;
@property (nonatomic) BOOL hasTrackClickEvent;

- (void).cxx_destruct;

@end
