@class NSString, NSArray;

@interface ACCChallengeBindWrapModel : NSObject

@property (readonly, copy, nonatomic) NSString *moduleKey;
@property (readonly, nonatomic) NSArray *needDeleteChallenges;
@property (readonly, nonatomic) NSArray *currentBindChallenges;

- (id)initWithModuleKey:(id)a0;
- (void)updateCurrentBindChallenges:(id)a0;
- (void)markAllNeedDelete;
- (void)markSyncedToTitle;
- (void).cxx_destruct;

@end
