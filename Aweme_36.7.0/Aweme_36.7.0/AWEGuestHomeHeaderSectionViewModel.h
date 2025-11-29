@class AWEGuestHomeHeaderModel, NSString, AWEGuestHomePageContext;

@interface AWEGuestHomeHeaderSectionViewModel : AWEBaseListSectionViewModel <AWEGuestModeMessage, NSObject>

@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (retain, nonatomic) AWEGuestHomeHeaderModel *headerModel;
@property (copy, nonatomic) NSString *translatedFollowingCount;
@property (nonatomic) BOOL fetchSuccessFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithModelsArray:(id)a0 pageContext:(id)a1;

- (void)fetchSectionData;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)calculateFollowingCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
