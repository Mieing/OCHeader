@class NSMutableDictionary;

@interface PrequestFilterJudger : NSObject

@property (retain) NSMutableDictionary *skipJudger;

+ (id)shareInstance;

- (void)parseTNCPrequestFilterJudgerConfig:(id)a0;
- (BOOL)isSkipCurrentPrequestFilter:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
