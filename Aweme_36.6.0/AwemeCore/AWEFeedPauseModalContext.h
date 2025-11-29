@class NSString, UIViewController;
@protocol AWEFeedContainerProtocol, AWEFeedPauseModalBaseConfigProtocol;

@interface AWEFeedPauseModalContext : NSObject <AWEFeedPauseModalContextProtocol>

@property (retain, nonatomic) id<AWEFeedPauseModalBaseConfigProtocol> config;
@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *feedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
