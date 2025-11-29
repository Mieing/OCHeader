@class NSString, NSDictionary;

@interface BDECIMConversationCreationOptions : NSObject

@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSDictionary *bizExtension;

- (void).cxx_destruct;

@end
