@class NSNumber;

@interface AWERelationFollowGroupMemberDataController : AWEBaseDataController

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSNumber *groupID;

- (void)fetchDataWithType:(BOOL)a0 completion:(id /* block */)a1;
- (id)paramsWithFetchType:(BOOL)a0;
- (void)fetchAllUidsCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithGroupID:(id)a0;

@end
