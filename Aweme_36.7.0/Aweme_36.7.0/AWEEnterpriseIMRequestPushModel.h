@class NSString;

@interface AWEEnterpriseIMRequestPushModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *secFromUid;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *api;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *convShortId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
