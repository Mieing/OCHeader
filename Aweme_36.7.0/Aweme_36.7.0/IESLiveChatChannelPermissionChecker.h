@class IESLiveCountTimer, NSString;
@protocol IESLiveVerifyConfig, IESLiveNoticeActions, IESLiveAuthorizationService;

@interface IESLiveChatChannelPermissionChecker : NSObject <IESLiveUserActions>

@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (retain, nonatomic) id<IESLiveNoticeActions> noticeActionCreator;
@property (retain, nonatomic) id<IESLiveAuthorizationService> authorizationService;
@property (nonatomic) BOOL hasRealNameVerified;
@property (nonatomic) BOOL isGoingToRealNameVerified;
@property (retain, nonatomic) IESLiveCountTimer *verifiedTimer;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkApplyLinkmicPermissionError:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
