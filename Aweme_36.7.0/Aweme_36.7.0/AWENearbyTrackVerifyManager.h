@class NSMutableDictionary;

@interface AWENearbyTrackVerifyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventVerifyGroup;
@property (nonatomic) BOOL hasFetchedSettings;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (id)verifyEvent:(id)a0 params:(id)a1 complete:(id /* block */)a2;
- (id)trackVerifySettings;
- (void)reportVerifyReulstWithEvent:(id)a0 ruleModel:(id)a1 resultModel:(id)a2 oldParams:(id)a3;
- (BOOL)multithreadingTurn;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
