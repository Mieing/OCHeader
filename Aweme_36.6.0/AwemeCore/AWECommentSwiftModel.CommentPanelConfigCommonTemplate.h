@protocol AWECommentPanelLongPressConfigurationProtocol, AWECommentPanelHeaderConfigurationProtocol, AWECommentPanelMediaFeedConfigurationProtocol, AWECommentPanelInputViewConfigurationProtocol, AWECommentPanelCoreContentConfigurationProtocol, AWECommentPanelTabConfigurationProtocol;

@interface AWECommentSwiftModel.CommentPanelConfigCommonTemplate : NSObject <AWECommentPanelConfigurationProtocol>

@property (nonatomic, retain) id<AWECommentPanelHeaderConfigurationProtocol> headerConfig;
@property (nonatomic, retain) id<AWECommentPanelTabConfigurationProtocol> tabConfig;
@property (nonatomic, retain) id<AWECommentPanelCoreContentConfigurationProtocol> coreContentConfig;
@property (nonatomic, retain) id<AWECommentPanelLongPressConfigurationProtocol> longPressConfig;
@property (nonatomic, retain) id<AWECommentPanelMediaFeedConfigurationProtocol> mediaFeedConfig;
@property (nonatomic, retain) id<AWECommentPanelInputViewConfigurationProtocol> inputConfig;

- (void).cxx_destruct;
- (id)init;

@end
