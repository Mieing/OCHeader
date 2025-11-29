@class NSString, IESLiveAnchorAudienceInteractiveGameModel;

@interface IESLiveGameOpenPlatformBootConfigCache : NSObject

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;

- (id)readAllOpenCapabilityListsFromLocalCache;
- (id)removeLRUOpenCapabilityListCache:(id)a0 appID:(id)a1 maxCount:(unsigned long long)a2;
- (BOOL)hasOpenCapabilityListInLocalCache;
- (id)readOpenCapabilityListFromLocalCache;
- (void)writeOpenCapabilityListToLocalCache:(id)a0;
- (BOOL)readDomainAllowListFromLocalCache;
- (void)writeDomainAllowListArrayToLocalCache:(id)a0;
- (BOOL)readDisableInteractImFromLocalCache;
- (void)writeDisableInteractImToLocalCache:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithAppId:(id)a0;

@end
