@protocol AWECommentControlVideoStateProtocol;

@interface AWECommentInputMediaFeedConfig : NSObject

@property (weak, nonatomic) id interactionViewController;
@property (weak, nonatomic) id<AWECommentControlVideoStateProtocol> videoStateChangeDelegate;

- (void).cxx_destruct;

@end
