@class NSDictionary, NSArray;

@interface AWEBatManTasksConfig : NSObject

@property (retain, nonatomic) NSDictionary *configDict;
@property (retain, nonatomic) NSArray *orginTaskInfos;
@property (retain, nonatomic) NSArray *taskViewModels;

+ (id)sharedInstance;

- (void)arrangeTaskInfos:(id)a0 isVip:(BOOL)a1;
- (id)getTasksModels;
- (id)taskViewModelWithIndex:(unsigned long long)a0;
- (void)arrangeExtraInfoWithModel:(id)a0 taskInfo:(id)a1 isVip:(BOOL)a2;
- (void)arrangeSignInExtraInfoWithModel:(id)a0 extra:(id)a1 isVip:(BOOL)a2;
- (void)arrangeADExtraInfoWithModel:(id)a0 extra:(id)a1 isVip:(BOOL)a2;
- (void)arrangeExtraInfoWithModel:(id)a0 extra:(id)a1 isVip:(BOOL)a2;
- (void)arrangeNewUserExtraInfoWithModel:(id)a0 extra:(id)a1;
- (id)taskViewModelWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)tasksCount;

@end
