@class NSString, NSMutableArray;

@interface AWESearchMaskedSugManager : NSObject

@property (copy, nonatomic) NSString *currentSessionID;
@property (retain, nonatomic) NSMutableArray *maskedSugs;
@property (nonatomic) BOOL executedSearch;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *gid;

+ (id)sharedManager;

- (void)trackMaskedSugClickWithSearchID:(id)a0 keyword:(id)a1;
- (void)updateMaskedSugs:(id)a0 sessionID:(id)a1 imprID:(id)a2;
- (void)trackMaskedSugClick;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
