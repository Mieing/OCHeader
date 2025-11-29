@class NSError, NSString;

@interface TIMXConversationAuditOperationResponseWrapper : NSObject <TIMXConversationAuditOperationResponse>

@property (retain, nonatomic) id internalObject;
@property (readonly, nonatomic) NSError *errorInBody;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) long long checkCode;
@property (readonly, copy, nonatomic) NSString *checkMessage;
@property (readonly, copy, nonatomic) NSString *extraInfo;
@property (readonly, nonatomic) id extObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasCheckCode;
- (BOOL)hasCheckMessage;
- (id)additionalTrackParams;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (BOOL)hasStatus;

@end
