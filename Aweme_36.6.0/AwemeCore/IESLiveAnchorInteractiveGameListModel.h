@class NSArray, NSDictionary, NSString;

@interface IESLiveAnchorInteractiveGameListModel : IESLiveDynamicModel

@property (copy, nonatomic) NSArray *gameList;
@property (copy, nonatomic) NSDictionary *groupPropertyDic;
@property (copy, nonatomic) NSArray *groupOrderArr;
@property (copy, nonatomic) NSArray *tabOrderArr;
@property (copy, nonatomic) NSArray *secondOrderArr;
@property (copy, nonatomic) NSString *dataHash;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) long long selectedGroup;

- (id)initWithFuncPBData:(id)a0;
- (void).cxx_destruct;

@end
