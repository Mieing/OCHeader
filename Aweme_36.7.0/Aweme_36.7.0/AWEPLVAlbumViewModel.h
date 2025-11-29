@class NSString, AWEPadPMCAlbumCardModel, AWEPadBaseListSectionController, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVAlbumViewModel : NSObject <AWEPLVCommonCardViewModelProtocol>

@property (retain, nonatomic) AWEPadPMCAlbumCardModel *albumModel;
@property (copy, nonatomic) NSString *bookingBtnTitle;
@property (readonly, nonatomic) BOOL hasSubscribe;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isBookingLoading;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (weak, nonatomic) AWEPadBaseListSectionController *sectionController;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) id /* block */ getJumpExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackToastShow:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)historyClickReport;
- (void)collectButtonDidClicked;
- (void)onBookingBtnClicked:(id)a0;
- (void)transferToRelatedPlayerDetailView;
- (id)initWithAlbumModel:(id)a0;
- (void)updateBookingBtnTitle;
- (void)trackPadAppointmentStatusWithEvent:(id)a0 ExtraParams:(id)a1;
- (void)submitBookingLive;
- (void)trackBooking;
- (void)submitUnBookingLive;
- (void)trackUnBooking;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 coverRatio:(double)a3;
- (void)trackLongVideoEvent:(id)a0 withExtraParams:(id)a1;
- (void)updateFavoriteStatus;
- (id)getAlbumIDs;
- (id)getAlbumModelFromController:(id)a0;
- (void)unBookingLimitedFree;
- (void)bookingLimitedFree;
- (void)onFavoriteTagClicked;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;

@end
