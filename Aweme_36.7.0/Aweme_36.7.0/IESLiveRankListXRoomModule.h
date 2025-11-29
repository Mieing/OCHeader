@class NSString;

@interface IESLiveRankListXRoomModule : IESLiveModule <IESLiveRankListXRoomModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rankListInterface;
- (void)showAudienceRankList;
- (void)showAudienceRankListWithCustomParam:(id)a0;
- (void)showRankListView;
- (void)hideRankListView;

@end
