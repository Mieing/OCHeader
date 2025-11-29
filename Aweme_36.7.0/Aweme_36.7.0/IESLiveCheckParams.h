@class NSString;

@interface IESLiveCheckParams : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *adTypeFlags;
@property (copy, nonatomic) NSString *relativeLogids;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) long long userCount;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) BOOL isAdWhite;
@property (nonatomic) long long distributionScenes;
@property (copy, nonatomic) NSString *feedTimeMs;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) BOOL disableFetch;

- (void).cxx_destruct;

@end
