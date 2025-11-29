@class NSString, NSDictionary, AWEPLVPageContext;
@protocol AWEPLVSectionModelProtocol;

@interface AWEPadPolymericChannelAppointmentSectionViewModel : AWEPadPolymericChannelSlidableSectionViewModel <AWEPLVSectionViewModelProtocol>

@property (nonatomic) BOOL isSpringLiveBookingRequestOnAir;
@property (nonatomic) BOOL isLimitedFreeRequestOnAir;
@property (retain, nonatomic) id<AWEPLVSectionModelProtocol> sectionModel;
@property (nonatomic) long long sectionIndex;
@property (readonly, nonatomic) BOOL canShow;
@property (nonatomic) BOOL enableNewArch;
@property (nonatomic) long long enterScene;
@property (nonatomic) long long maxLines;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;
@property (retain, nonatomic) id sectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceByModels:(id)a0;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)triggerCollectionViewScrollToTop;
- (void)updateSectionTimeLine;
- (void)bookWithCardList;
- (void)updateSubscribeStatus;
- (void)trackPadAppointmentStatusWithEvent:(id)a0 ExtraParams:(id)a1;
- (void)filterSectionDataWithFilterMap:(id)a0;
- (void)bookLivingIfLogin;
- (void)trackPadEpisodeOrderAllClick;

@end
