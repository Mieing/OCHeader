@class AWEUserModel;

@interface AWEFriendStateWriteRequest : AWESocialRelationRequest

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isFriend;

+ (id)requestForScene:(id)a0 user:(id)a1 isFriend:(BOOL)a2;

- (void).cxx_destruct;

@end
