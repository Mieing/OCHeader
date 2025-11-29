@class NSString;
@protocol AWEHPChannelControllerProtocol;

@interface AWEHPLeftSlideToUserPluginController : NSObject <AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowLeftSlideGuide;
- (unsigned long long)canLeftSlideToUserPageWithReason:(id *)a0;
- (double)currentCellLeftSlideInteractiveGuideHeight;
- (double)nextCellLeftSlideInteractiveGuideHeight;
- (id)p_getCurrentHandleLeftSlideToUserTableVC;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
