@class NSArray, NSMutableArray, NSMutableSet;

@interface WCSmartGroupRunInfo : NSObject

@property (nonatomic) unsigned long long seq;
@property (nonatomic) BOOL bOnlyRecommendGroups;
@property (nonatomic) BOOL bSearchRecommendGroups;
@property (nonatomic) BOOL bRecommendFromLastMemberIfNeed;
@property (nonatomic) BOOL bForbidRecommendOpenIMContact;
@property (retain, nonatomic) NSArray *arrInputMemlist;
@property (retain, nonatomic) NSArray *arrSessionCopy;
@property (nonatomic) unsigned long long taskBeginTime;
@property (nonatomic) unsigned long long taskEndTime;
@property (nonatomic) unsigned int totalGroupCnt;
@property (nonatomic) unsigned int totalMMCnt;
@property (nonatomic) BOOL bRepick;
@property (retain, nonatomic) NSMutableArray *arrResult;
@property (retain, nonatomic) NSMutableArray *arrTimeCost;
@property (retain, nonatomic) NSMutableArray *arrSharedGroupCnt;
@property (retain, nonatomic) NSArray *arrSharedGroup;
@property (retain, nonatomic) NSMutableSet *filterSet;
@property (nonatomic) BOOL bNewSearchRecommendGroup;
@property (nonatomic) unsigned int searchRecommendGroupDiff;

- (id)getInputMemDesc;
- (id)getSessionByUserName:(id)a0;
- (void).cxx_destruct;

@end
