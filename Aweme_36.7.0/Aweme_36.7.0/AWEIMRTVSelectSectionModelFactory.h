@interface AWEIMRTVSelectSectionModelFactory : NSObject

- (id)onlineSelectSectionModelWithUserIDs:(id)a0 activeUserMapper:(id)a1 needSort:(BOOL)a2;
- (id)indexIndicatorSelectSectionModelsWithUserSecIDs:(id)a0 activeUserMapper:(id)a1;
- (id)selectedSectionModelWithSecUserIDs:(id)a0 sectionTitle:(id)a1 activeUserMapper:(id)a2;
- (id)onlineSelectSectionModelWithUserIDs:(id)a0 activeUserMapper:(id)a1 preferSelectedSecUIDs:(id)a2 needSort:(BOOL)a3;
- (id)indexIndicatorSelectSectionModelsWithUserSecIDs:(id)a0 activeUserMapper:(id)a1 preferSelectedSecUIDs:(id)a2;
- (id)__getUserWithSecUID:(id)a0;
- (id)__sortedDataWithTitlesFromSecUserIDs:(id)a0;
- (id)__aweIMUsersFromSecUserIDs:(id)a0;

@end
