@class AWECommentInputViewConfigModel, AWECommentMediaFeedInteractionConfig, NSArray;

@interface AWECommentPanelMediaFeedConfigModel : NSObject

@property (nonatomic) BOOL isDisableInteraction;
@property (retain, nonatomic) AWECommentMediaFeedInteractionConfig *interactionSubConfig;
@property (nonatomic) BOOL isDisableCustomTransition;
@property (retain, nonatomic) AWECommentInputViewConfigModel *commentMediaInputConfigModel;
@property (copy, nonatomic) NSArray *componentInfoArray;

- (void).cxx_destruct;

@end
