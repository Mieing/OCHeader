@class NSArray, AWECodeGenV1FamiliarResponse;

@interface AWEFollowListReadResponse : AWESocialRelationResponse

@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) AWECodeGenV1FamiliarResponse *networkResponse;
@property (nonatomic) unsigned long long targetUidListCount;
@property (copy, nonatomic) NSArray *userIDList;
@property (copy, nonatomic) NSArray *userDataList;

- (void).cxx_destruct;

@end
