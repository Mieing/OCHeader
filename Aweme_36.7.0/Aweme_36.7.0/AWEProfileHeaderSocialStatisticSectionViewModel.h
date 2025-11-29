@class AWEProfileContext, AWESocialRelationObserver, NSString, AWEProfileHeaderContext, NSNumber;

@interface AWEProfileHeaderSocialStatisticSectionViewModel : AWEBaseListSectionViewModel <AWEGuestModeMessage, AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderSocialStatisticSectionService>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (retain, nonatomic) AWESocialRelationObserver *friendCountObserver;
@property (nonatomic) BOOL usingLocalFriendCount;
@property (nonatomic) BOOL followStatusChange;
@property (retain, nonatomic) NSNumber *fansCount;
@property (retain, nonatomic) NSNumber *followingCount;
@property (retain, nonatomic) NSNumber *friendsCount;
@property (readonly, nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowFriendsLabel:(id)a0;
+ (double)getSocialStatisticHeightFontWithMaxWidth:(double)a0 statisticArray:(id)a1 resultLabelFontSize:(double *)a2 resultBtnFontSize:(double *)a3 resultGap:(double *)a4;
+ (double)labelMaxAdaptiveFont;
+ (double)buttonMaxAdaptiveFont;

- (BOOL)isPrivateAccount;
- (void)configWithContext:(id)a0;
- (BOOL)showPrivateAccountInfoView;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)guestDidDiggAweme:(id)a0 isUndigg:(BOOL)a1;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (double)sectionWidth;
- (id)socialStatisticFormatWithType:(unsigned long long)a0 enterFrom:(id)a1;
- (void)p_followStatusDidChange:(id)a0;
- (void)p_updateStatisticCount:(id)a0;
- (void)trackEnterMutualListWithEnterMethod:(id)a0 enterFrom:(id)a1;
- (void)trackEnterMateListWithEnterMethod:(id)a0 enterFrom:(id)a1;
- (void)p_addMateOrMutualFollowEnterance;
- (void)p_addMateOrFriendObserver;
- (void)p_updateFriendCountV2:(long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;
- (double)sectionHeight;

@end
