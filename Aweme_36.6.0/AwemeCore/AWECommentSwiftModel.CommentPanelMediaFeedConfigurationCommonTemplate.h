@protocol AWECommentMediaFeedComponentConfigurationProtocol, AWECommentMediaFeedUIConfigurationProtocol;

@interface AWECommentSwiftModel.CommentPanelMediaFeedConfigurationCommonTemplate : NSObject <AWECommentPanelMediaFeedConfigurationProtocol> {
    void /* unknown type, empty encoding */ templateModel;
}

@property (nonatomic, retain) id<AWECommentMediaFeedUIConfigurationProtocol> mediaFeedUIConfig;
@property (nonatomic, retain) id<AWECommentMediaFeedComponentConfigurationProtocol> mediaFeedComponentConfig;

- (void).cxx_destruct;
- (id)init;

@end
