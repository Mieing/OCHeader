@class NSString, NSMutableSet;

@interface AWEFeedUnfollowFamiliarManager : NSObject <AWEUserMessage, AWEFeedUnfollowFamiliarManagerProtocol>

@property (retain, nonatomic) NSMutableSet *unfollowFamiliarIDs;
@property (retain, nonatomic) NSMutableSet *reasonLabelIDs;
@property (retain, nonatomic) NSMutableSet *monitoredIDs;
@property (retain, nonatomic) NSString *currentItemID;
@property (retain, nonatomic) NSString *currentHideReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)cellWillDisplay:(id)a0;
- (BOOL)canShowReasonLabel:(id)a0;
- (BOOL)canShowUnfollowFamiliarElement:(id)a0;
- (void)markUnfollowFamiliarAwemeModel:(id)a0 hideFollowButtonReason:(id)a1;
- (void)markShowReasonLabel:(id)a0;
- (void)monitorNotShowTheSameTimeWithAwemeModelItemID:(id)a0 authorUID:(id)a1;
- (BOOL)notShowUnfollowFamiliarElementOrReasonLabelTheSameTime:(id)a0;
- (void)markShowUnfollowFamiliarElement:(id)a0;
- (void)monitorUnfollowFamiliarFollowButton:(BOOL)a0;
- (void)monitorFollowButtonAndMateButtonError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
