@class NSString, IESECTracker;

@interface IESECTabKitContainerTrackService : NSObject <IESECTabKitContainerTrackService> {
    BOOL _defaultAnchored;
}

@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTrackContextWithLogExtra:(id)a0;
- (void)trackEvent:(id)a0 logExtra:(id)a1 extraParams:(id)a2 btmParams:(id)a3;
- (id)pagerViewEnterType:(unsigned long long)a0;
- (void)trackEvent:(id)a0 logExtra:(id)a1 extraParams:(id)a2;
- (void)updateTrackLogExtra:(id)a0;
- (void)trackEvent:(id)a0 extraParams:(id)a1 btmParams:(id)a2;
- (void)trackEcomStayTime:(double)a0 logExtra:(id)a1 extraParams:(id)a2 btmParams:(id)a3;
- (void)trackPageView:(id)a0 enterType:(unsigned long long)a1 extraParams:(id)a2 btmParams:(id)a3;
- (void)trackEcomPageCrossSlide:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
