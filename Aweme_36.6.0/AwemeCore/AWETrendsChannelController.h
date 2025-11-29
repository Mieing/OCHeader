@class NSString, UIViewController;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWETrendsChannelController : NSObject <AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getContentViewController;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
