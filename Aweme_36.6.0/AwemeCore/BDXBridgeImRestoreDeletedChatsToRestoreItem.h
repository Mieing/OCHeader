@class NSString, NSNumber;

@interface BDXBridgeImRestoreDeletedChatsToRestoreItem : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *conversationShortId;
@property (retain, nonatomic) NSNumber *conversationType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
