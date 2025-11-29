@class NSArray;

@interface AWECloseFriendsListReadResponse : AWESocialRelationResponse

@property (retain, nonatomic) NSArray *forwardUserIDList;
@property (retain, nonatomic) NSArray *reverseUserIDList;
@property (retain, nonatomic) NSArray *userIDList;
@property (nonatomic) long long closeFriendsCount;

- (void).cxx_destruct;

@end
