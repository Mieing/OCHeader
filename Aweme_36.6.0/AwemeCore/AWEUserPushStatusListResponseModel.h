@class NSMutableArray;

@interface AWEUserPushStatusListResponseModel : NSObject

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *userArray;
@property (nonatomic) long long usersArrayCount;
@property (nonatomic) long long total;

- (id)getUserArray;
- (id)convertLiveLiveUserToLiveUserModel:(id)a0;
- (void).cxx_destruct;

@end
