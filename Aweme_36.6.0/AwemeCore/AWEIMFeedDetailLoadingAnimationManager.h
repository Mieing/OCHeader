@class AWEIMMessage;
@protocol IESIMSelectVideoCoverCellService, AWEIMFeedDetailLoadingAnimationMessageProtocol;

@interface AWEIMFeedDetailLoadingAnimationManager : AWEIMComponentBase

@property (weak, nonatomic) AWEIMMessage<AWEIMFeedDetailLoadingAnimationMessageProtocol> *targetMessage;
@property (weak, nonatomic) id<IESIMSelectVideoCoverCellService> selectVideoCoverCellService;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didSelectVideoCoverMessage:(id)a0;
- (void).cxx_destruct;

@end
