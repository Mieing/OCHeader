@class BDXBridgeImRestoreDeletedChatsToRestoreItem;

@interface AWEIMXBridgeImRestoreDeletedChatsMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeImRestoreDeletedChatsToRestoreItem *toRestoreItem;

+ (id)requiredKeyPaths;
+ (id)toRestoreItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
