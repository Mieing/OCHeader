@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWEFeedFilterFromHotManager : NSObject <AWEUserMessage, AWEFeedFilterFromHotManagerProtocol>

@property (retain, nonatomic) NSMutableSet *itemExistSet;
@property (retain, nonatomic) NSMutableDictionary *itemIncrementMap;
@property (nonatomic) BOOL needReloadItemIncrementMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)trackForDuplicateWithPage:(id)a0 comeFrom:(id)a1 duplicateID:(id)a2 awemeType:(long long)a3;
- (BOOL)isExistNeedDetect;
- (void)clearExistSet;
- (id)duplicateModelWithAwemeID:(id)a0;
- (void)setIncrementToDiskWithModel:(id)a0;
- (void)updateIncrementIfNeeded;
- (void)clearIncrementSet;
- (BOOL)isIncrementNeedDetect;
- (void)recordHotPlayedItem:(id)a0;
- (void)debug_removeItemRecord:(id)a0;
- (void)debug_removeAllItemRecord;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDuplicate:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
