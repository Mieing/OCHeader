@class NSString;

@interface AWEFollowStateDataProvider : AWESocialRelationDataProvider <AWEFollowStateDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)readFromMemory:(id)a0;
- (long long)mutualFollowTypeWithUser:(id)a0 scene:(id)a1;
- (id)identifier;

@end
