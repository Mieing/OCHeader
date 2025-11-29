@class NSString, NSDictionary;

@interface TIMXOConversationCreationOptions : MTLModel <IESIMConversationCreationOptionsProtocol>

@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSDictionary *bizExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSDictionary *bizExtension;

- (void).cxx_destruct;

@end
