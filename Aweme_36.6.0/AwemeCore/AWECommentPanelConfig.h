@class AWECommentPanelCoreContentConfigModel, AWECommentPanelTabConfigModel, AWECommentPanelHeaderConfigModel, AWECommentPanelMediaFeedConfigModel, AWECommentPanelInputViewConfigModel, AWECommentPanelLongPressConfigModel;

@interface AWECommentPanelConfig : NSObject

@property (retain, nonatomic) AWECommentPanelTabConfigModel *tabConfigModel;
@property (retain, nonatomic) AWECommentPanelCoreContentConfigModel *coreContentConfigModel;
@property (retain, nonatomic) AWECommentPanelHeaderConfigModel *headerConfigModel;
@property (retain, nonatomic) AWECommentPanelLongPressConfigModel *longPressPanelConfigModel;
@property (retain, nonatomic) AWECommentPanelMediaFeedConfigModel *mediaFeedConfigModel;
@property (retain, nonatomic) AWECommentPanelInputViewConfigModel *inputViewConfigModel;

- (void).cxx_destruct;

@end
