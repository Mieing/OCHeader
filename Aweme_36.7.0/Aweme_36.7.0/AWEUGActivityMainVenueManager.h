@class NSString, NSMutableDictionary;

@interface AWEUGActivityMainVenueManager : NSObject

@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) NSMutableDictionary *tabIDMap;

+ (id)sharedManager;

- (id)activitySchema;
- (BOOL)backToMainVenueTabForID:(id)a0;
- (void)updateTabID:(id)a0 withActivityID:(id)a1;
- (void)logBackToPageForActivityID:(id)a0 withTabID:(id)a1 result:(BOOL)a2;
- (BOOL)checkActivitySchema:(id)a0;
- (id)fallbackSchema;
- (void).cxx_destruct;
- (id)init;

@end
