@class NSString, NSDictionary, NSNumber;

@interface AWEIMNewGroupInviteCardSuccessResult : NSObject <IESIMGroupInviteCardSuccessResult>

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *enterpriseTrackParams;
@property (retain, nonatomic) NSNumber *sourceType;
@property (nonatomic) BOOL didAppliedJoinGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
