@class NSString, NSMutableArray;

@interface AWEUGCTopicPublishProgressViewModule : NSObject <AWEUGCTopicModuleProtocol>

@property (retain, nonatomic) NSMutableArray *progressViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onUGCServiceRemoved;
- (void)clearAllProgressView;
- (void)createProgressViewWithContext:(id)a0;
- (BOOL)isUIViewControllerBindedProgressView:(id)a0;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;

@end
