@class NSString, NSArray;

@interface AWECloseFriendsActionRequest : AWESocialRelationRequest

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long currentType;
@property (retain, nonatomic) NSArray *userIDList;
@property (nonatomic) long long sourcePage;
@property (nonatomic) long long actionType;

- (id)getParams;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
