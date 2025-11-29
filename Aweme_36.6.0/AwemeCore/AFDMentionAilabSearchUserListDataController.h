@class NSArray, NSDictionary;

@interface AFDMentionAilabSearchUserListDataController : NSObject

@property (retain, nonatomic) NSArray *remoteSearchDataList;
@property (nonatomic) BOOL fetchCompletion;
@property (copy, nonatomic) NSDictionary *logPassback;

+ (id)sharedInstance;

- (void)fetchSearchDataWithGroupId:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
