@class NSString;

@interface TIMXOConversationCreationParticpantObjects : MTLModel <TIMXOConversationCreationParticpantObjectsProtocol>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *bizRole;
@property (copy, nonatomic) NSString *groupSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
