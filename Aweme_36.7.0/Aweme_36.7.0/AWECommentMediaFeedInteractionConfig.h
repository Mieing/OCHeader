@interface AWECommentMediaFeedInteractionConfig : NSObject

@property (nonatomic) BOOL disablePublishImage;
@property (nonatomic) BOOL disableTextContent;
@property (nonatomic) BOOL disableCommentLike;
@property (nonatomic) BOOL disableInputView;
@property (nonatomic) BOOL disableLongPressPanel;
@property (nonatomic) BOOL enableMultiMediaIndicator;

- (id)init;

@end
