@class NSString, NSMutableSet, AWELVideoBasePageContext;

@interface AWELVideoHallTracker : NSObject <AWEVideoHallTrackerProtocol>

@property (retain, nonatomic) NSMutableSet *uploadedSet;
@property (retain, nonatomic) AWELVideoBasePageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)trackStayTimeWithEnterFrom:(id)a0 duration:(double)a1;
- (void)trackLVideoClickWithLogExtraDict:(id)a0;
- (void)trackBaseLVideoShowWithLogExtraDict:(id)a0 withTrackName:(id)a1;
- (BOOL)needTrackLVideoShow:(id)a0;
- (void)updateUploadedSet:(id)a0;
- (void)trackFavouriteVideo:(id)a0 isCancel:(BOOL)a1;
- (void)trackVideoPlayFinishWithLogExtraDict:(id)a0;
- (void)trackFinishViewShowWithModel:(id)a0;
- (void)trackFinishPaymentTrialEndWithModel:(id)a0;
- (void)trackEnterLVideoPage:(id)a0;
- (void)trackEnterFilterPage:(id)a0 tabName:(id)a1;
- (void)trackLVideoShowWithLogExtraDict:(id)a0;
- (void)trackFeedSharePannelWithScheme:(id)a0;
- (void)trackSearchButtonShow;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
