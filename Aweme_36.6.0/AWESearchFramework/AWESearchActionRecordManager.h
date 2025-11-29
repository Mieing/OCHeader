@class NSMutableSet, NSMutableArray;

@interface AWESearchActionRecordManager : NSObject

@property (retain, nonatomic) NSMutableSet *searchIdSet;
@property (retain, nonatomic) NSMutableArray *searchResultActionList;

- (void)pushSearchResultRecordIfNotExistWithSearchType:(unsigned long long)a0 searchId:(id)a1 searchKeyword:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4 groupID:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
