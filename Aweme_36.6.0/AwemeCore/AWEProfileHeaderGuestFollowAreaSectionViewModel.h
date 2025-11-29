@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderGuestFollowAreaSectionViewModel : AWEBaseListSectionViewModel <AWEGuestModeMessage, AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isRequestOnAir;
@property (readonly, nonatomic) double sectionTopPadding;
@property (readonly, nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)requestFollow;
- (void)trackFollowEventWithUnfollow:(BOOL)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
