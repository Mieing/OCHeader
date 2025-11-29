@class NSString, AWEAdWebViewController;
@protocol AWERNWebContainerDelegate;

@interface AWERNAndWebContainer : NSObject <AWERNWebContainerProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (retain, nonatomic) id baseBundleLoadNotiToken;
@property (retain, nonatomic) id businessBundleLoadNotiToken;
@property (copy, nonatomic) NSString *fallbackURL;
@property (weak, nonatomic) id<AWERNWebContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reactID;
- (void)handleBroadcastNotification:(id)a0;
- (id)contentVC;
- (void)handleApplicationWillResignActiveNotification:(id)a0;
- (id)initWithSchema:(id)a0 params:(id)a1;
- (id)reactContainerID;
- (BOOL)isRN;
- (BOOL)didFallbackInternally;
- (void).cxx_destruct;
- (id)contentController;
- (void)dealloc;

@end
