@class NSNumber, NSString;

@interface AweClueCallEvaluationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *commerceUid;
@property (retain, nonatomic) NSNumber *currentUid;
@property (retain, nonatomic) NSNumber *callTimeStamp;
@property (copy, nonatomic) NSString *inviteText;
@property (copy, nonatomic) NSString *actionText;
@property (copy, nonatomic) NSString *actionUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
