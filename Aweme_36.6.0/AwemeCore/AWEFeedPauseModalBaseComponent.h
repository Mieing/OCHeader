@class NSString, UIViewController, UIView;
@protocol AWEFeedPauseModalStyleManagerProtocol, AWEFeedContainerProtocol;

@interface AWEFeedPauseModalBaseComponent : NSObject <AWEFeedPauseModalBaseComponentProtocol>

@property (retain, nonatomic) UIView *componentContainerView;
@property (weak, nonatomic) id<AWEFeedPauseModalStyleManagerProtocol> componentContainer;
@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *feedContainer;
@property (nonatomic) double leftWidth;
@property (nonatomic) double leftHeight;
@property (nonatomic) double topDistance;
@property (nonatomic) double introMaxWidth;
@property (nonatomic) double introHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)pauseModalBizType;
- (void)deallocComponentWithModel:(id)a0;
- (void)hideComponentWithModel:(id)a0 clickMethod:(id)a1;
- (id)pauseContentWithModel:(id)a0;
- (id)updateViewWithModel:(id)a0;
- (void).cxx_destruct;

@end
