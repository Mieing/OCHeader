@class NSArray, AWECodeGenV1MateListResponse;

@interface AWEMateListReadResponse : AWESocialRelationResponse

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long total;
@property (retain, nonatomic) AWECodeGenV1MateListResponse *networkResponse;

- (void).cxx_destruct;

@end
