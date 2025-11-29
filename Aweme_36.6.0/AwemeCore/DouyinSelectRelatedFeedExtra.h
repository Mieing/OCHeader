@class NSString;

@interface DouyinSelectRelatedFeedExtra : GPBMessage

@property (copy, nonatomic) NSString *ugInfoRes;
@property (nonatomic) BOOL hasUgInfoRes;
@property (nonatomic) long long ugInfoParseGid;
@property (nonatomic) BOOL hasUgInfoParseGid;
@property (copy, nonatomic) NSString *awemeRelationSecId;
@property (nonatomic) BOOL hasAwemeRelationSecId;
@property (nonatomic) int loginRefreshMode;
@property (nonatomic) BOOL hasLoginRefreshMode;
@property (copy, nonatomic) NSString *ugInfoParseSeqGid;
@property (nonatomic) BOOL hasUgInfoParseSeqGid;
@property (copy, nonatomic) NSString *ugInfoRecallGids;
@property (nonatomic) BOOL hasUgInfoRecallGids;
@property (nonatomic) long long wakeupUgInfoParseGid;
@property (nonatomic) BOOL hasWakeupUgInfoParseGid;
@property (copy, nonatomic) NSString *wakeupUgInfoRecallGids;
@property (nonatomic) BOOL hasWakeupUgInfoRecallGids;

+ (id)descriptor;

@end
