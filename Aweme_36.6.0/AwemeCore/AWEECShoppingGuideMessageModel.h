@class NSString, AWEECShoppingGuideMessageBubbleCellModel, AWEECShoppingGuideWelcomeInfoResponseModel, NSDictionary, AWEECShoppingGuideMessageSyncModel, NSMutableArray, AWEECShoppingAIGuideHomePageDynamicModel, AWEECShoppingGuideMessageSourceModel;

@interface AWEECShoppingGuideMessageModel : MTLModel <MTLJSONSerializing, NSMutableCopying>

@property (copy, nonatomic) NSString *messageUUID;
@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) NSMutableArray *sections;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long answerDuration;
@property (retain, nonatomic) AWEECShoppingGuideMessageSourceModel *sourceModel;
@property (retain, nonatomic) AWEECShoppingGuideMessageSyncModel *syncModel;
@property (copy, nonatomic) NSString *sender;
@property (retain, nonatomic) AWEECShoppingGuideMessageBubbleCellModel *cellModel;
@property (nonatomic) BOOL hidden;
@property (nonatomic) long long rowID;
@property (nonatomic) BOOL shouldShowAgree;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageDynamicModel *dynamicWelcomeModel;
@property (retain, nonatomic) AWEECShoppingGuideWelcomeInfoResponseModel *oldDynamicWelcomeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (id)initWithText:(id)a0 role:(unsigned long long)a1;
- (id)initWithText:(id)a0 foldable:(BOOL)a1 role:(unsigned long long)a2;
- (id)lynxCellIdentifier;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
