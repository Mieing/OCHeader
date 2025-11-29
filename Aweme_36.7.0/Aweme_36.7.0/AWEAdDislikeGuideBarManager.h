@protocol AWECommerceComponentContext;

@interface AWEAdDislikeGuideBarManager : NSObject <AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ videoPeriodHandler;
    void /* unknown type, empty encoding */ guideBarShown;
    void /* unknown type, empty encoding */ bottomNotification;
}

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)viewWillDisappear;

@end
