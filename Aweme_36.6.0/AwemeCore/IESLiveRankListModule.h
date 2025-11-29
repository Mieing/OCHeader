@class NSString;

@interface IESLiveRankListModule : IESLiveModule <IESLiveRankListModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAudienceRankList;
- (BOOL)enableRankNewRights;
- (id)rankNewRightsData;

@end
