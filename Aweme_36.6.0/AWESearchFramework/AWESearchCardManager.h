@class NSMutableDictionary, NSDictionary, NSArray, NSString;

@interface AWESearchCardManager : NSObject <AWEModernFeedCellManagerProtocol>

@property (retain, nonatomic) NSDictionary *typeToCardMap;
@property (retain, nonatomic) NSMutableDictionary *dynamicTypeToClassMap;
@property (copy, nonatomic) NSArray *classNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)cellTypeForItem:(id)a0;
- (Class)controllerClassForType:(id)a0;
- (id)cellTypeForItemRegisterIfNeeded:(id)a0;
- (id)dynamicCellTypes;
- (id)accessoryTypeForCellType:(id)a0;
- (Class)attachmentControllerClass;
- (void).cxx_destruct;
- (id)allTypes;

@end
