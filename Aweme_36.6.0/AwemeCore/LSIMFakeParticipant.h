@class NSString;

@interface LSIMFakeParticipant : NSObject <BDECIMParticipant> {
    long long _userID;
    NSString *_alias;
    NSString *_belongingConversationIdentifier;
    NSString *_secUserID;
    long long _silentStatus;
    long long _silentTime;
    long long _sortOrder;
    NSString *_bizRole;
    long long _role;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)belongingConversationIdentifier;
- (long long)silentStatus;
- (void)setSilentStatus:(long long)a0;
- (long long)silentTime;
- (void)setSilentTime:(long long)a0;
- (void)setBizRole:(id)a0;
- (id)bizRole;
- (id)secUserID;
- (long long)userID;
- (void).cxx_destruct;
- (long long)sortOrder;
- (long long)role;
- (id)alias;

@end
