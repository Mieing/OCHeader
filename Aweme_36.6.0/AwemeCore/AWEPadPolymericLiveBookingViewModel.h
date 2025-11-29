@class NSString, AWEPadLiveBookingModel, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadPolymericLiveBookingViewModel : NSObject

@property (copy, nonatomic) NSString *dateText;
@property (copy, nonatomic) NSString *timeLineText;
@property (copy, nonatomic) NSString *bookingBtnTitle;
@property (nonatomic) BOOL isBookingLoading;
@property (retain, nonatomic) AWEPadLiveBookingModel *model;
@property (copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *coverUrl;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) BOOL hasSubscribe;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (void)trackToastShow:(id)a0;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)onBookingBtnClicked:(id)a0;
- (void)updateBookingBtnTitle;
- (void)trackPadAppointmentStatusWithEvent:(id)a0 ExtraParams:(id)a1;
- (void)gotoLiveRoomIfCan;
- (void)unBookingLive;
- (void)bookingLive;
- (void)trackEnterLive;
- (void)submitBookingLive;
- (void)trackBooking;
- (void)submitUnBookingLive;
- (void)trackUnBooking;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
