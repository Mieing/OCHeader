@class NSString, AWEECShoppingAIGuideHomePageDynamicModel, AWEECShoppingGuideWelcomeInfoResponseModel, NSMutableArray, AWEECShoppingGuideMessageModel;

@interface AWEECShoppingAIGuideMessageGroupViewModel : NSObject <IGListDiffable>

@property (retain, nonatomic) AWEECShoppingGuideMessageModel *groupMsgModel;
@property (nonatomic) unsigned long long role;
@property (copy, nonatomic) NSString *messageUUID;
@property (nonatomic) BOOL isDynamicMsg;
@property (nonatomic) BOOL skipTypeWriter;
@property (nonatomic) BOOL needRefreshBuffer;
@property (retain, nonatomic) NSMutableArray *sectionViewModels;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageDynamicModel *dynamicWelcomeModel;
@property (retain, nonatomic) AWEECShoppingGuideWelcomeInfoResponseModel *oldDynamicWelcomeModel;

+ (id)generateNewMsgModelWithOld:(id)a0;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (BOOL)isTopInGroup:(id)a0;
- (BOOL)isBottomInGroup:(id)a0;
- (void)insertSingleMsgViewModel:(id)a0 atIndex:(long long)a1;
- (void)appendSingleMsgViewModel:(id)a0;
- (void)removeSingleMsgViewModelAtIndex:(long long)a0;
- (id)initWithText:(id)a0 role:(unsigned long long)a1;
- (void)generateSectionViewModels;
- (void)replaceSingleMsgViewModel:(id)a0;
- (void)removeSingleMsgViewModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
