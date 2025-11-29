@class WCDataItem;

@interface WCAccessSecurityVerificationSessionMgr : NSObject

@property (readonly, nonatomic) BOOL isInSession;
@property (readonly, nonatomic) WCDataItem *securityVerificationDataItem;
@property (readonly, nonatomic) BOOL isVerified;

- (void)startSessionWithDataItem:(id)a0;
- (void)endSessionWithDataItem:(id)a0;
- (BOOL)isDataItemInSession:(id)a0;
- (void)updateFailDataItemForSpamAsPassSecurityVerification;
- (BOOL)isSecurityVerifiedInSessionForDataItem:(id)a0;
- (void).cxx_destruct;

@end
