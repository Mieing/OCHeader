@class AWEIMSchoolGroupWebAccess;

@interface AWEIMSchoolGroupManager : NSObject

@property (readonly, nonatomic) AWEIMSchoolGroupWebAccess *webAccess;

- (id)createConversationWithContext:(id)a0;
- (BOOL)schoolConversationIsVerified:(id)a0;
- (id)submitIdentifierVerificationAtConversation:(id)a0 enterYear:(long long)a1 collegeName:(id)a2 autoIntroduce:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
