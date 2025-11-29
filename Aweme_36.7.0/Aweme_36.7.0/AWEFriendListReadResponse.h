@class NSArray, AWECodeGenV1FamiliarResponse;

@interface AWEFriendListReadResponse : AWESocialRelationResponse

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long total;
@property (retain, nonatomic) AWECodeGenV1FamiliarResponse *networkResponse;

- (void).cxx_destruct;

@end
