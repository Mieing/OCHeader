@class NSArray, NSString;

@interface AWECommentFeedFastCommentManager : NSObject <AWECommentFeedFastCommentManagerProtocol>

@property (copy, nonatomic) NSArray *recordShowedAwemeIDs;
@property (copy, nonatomic) NSArray *recordExeuntAwemeIDs;
@property (nonatomic) long long currentTotalExeuntCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)settingsConfig;
- (id)keyRecordShowedAwemeIDs;
- (id)keyRecordExeuntAwemeIDs;
- (id)keyCurrentTotalExeuntCount;
- (long long)maxTotalExeuntCount;
- (long long)exeuntMaxAppearNoInteractionCount;
- (long long)exeuntMaxDisappearCount;
- (long long)lowCommentThreshold;
- (BOOL)shouldShowWithModel:(id)a0 referString:(id)a1;
- (id)defaultInputPlaceholder;
- (BOOL)recordEnableExeuntWithAweme:(id)a0;
- (void)resetExeunt;

@end
