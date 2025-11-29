@class NSString, NSDictionary, AWEPlayInteractionContext, NSMutableArray;

@interface AWEPlayInteractionDescriptionLiveStatusManager : NSObject

@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (nonatomic) BOOL atUserHasClicked;
@property (retain, nonatomic) NSDictionary *checkLiveStatusRoomParams;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) NSMutableArray *atUserIDsList;
@property (retain, nonatomic) NSMutableArray *atUserRangeList;

- (long long)liveStatusType;
- (void)clearAtUserInfo;
- (void)updateAtUserStatusIfNeedWithAttributedString:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableAtUserLiveStatus;
- (BOOL)isSafeSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forStringLength:(unsigned long long)a1;
- (id)liveStatusCompleteContentKeyName;
- (void)refreshAtUserIfNeedWithCompletion:(id /* block */)a0;
- (id)fetchUserNameWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 descriptionString:(id)a1;
- (BOOL)isAtUserSafeRangeComplete:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 liveStatusText:(id)a1;
- (id)fetchProfileURLWithUserID:(id)a0;
- (id)liveStatusTagAttachmentWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 openURL:(id)a2;
- (void)clickActionWithOpenURL:(id)a0;
- (void)configLiveStatusInfoWithUserID:(id)a0 originalString:(id)a1 completeString:(id)a2;
- (void)trackLiveVideoOtherPeopleClickIfNeed;
- (id)liveStatusInfoKeyName;
- (BOOL)isValidRequestFromLayoutElement:(BOOL)a0;
- (id)handleAtUserLivingStatusWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atUserID:(id)a1 originalText:(id)a2;
- (void)trackLiveVideoOtherPeopleShowIfNeed;
- (void)checkAtUsersLivingStatusWithCompletion:(id /* block */)a0;
- (id)liveStatusInvalidTimeKeyName;
- (double)requestTimeConfig;
- (id)extraParamsForCheckLivingStatusWithCount:(unsigned long long)a0;
- (void)checkRoomResponse:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
