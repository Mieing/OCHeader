@class IESLivePaidStreamSmallWindowView, NSMutableDictionary, NSString;

@interface IESLivePaidStreamSmallWindowFragment : IESLiveRoomComponent <IESLivePaidStreamSmallWindowViewDelegate, IESLivePaidStreamAction, HTSLiveAudienceActions>

@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (retain, nonatomic) IESLivePaidStreamSmallWindowView *smallWindowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 scene:(long long)a1;
- (void)showSmallWindow;
- (void)hideSmallWindow;
- (void)showPaidStreamBlockView:(BOOL)a0;
- (BOOL)shouldConfigSmallWindowView;
- (BOOL)shouldActiveSmallWindow;
- (id)createPreferenceOptionsModel;
- (void)paidStreamSmallWindowViewDidHide:(id)a0;
- (void).cxx_destruct;

@end
