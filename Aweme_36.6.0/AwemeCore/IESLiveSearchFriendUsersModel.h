@class NSString, NSNumber, IESLiveSearchFriendHighlightRangeModel;

@interface IESLiveSearchFriendUsersModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSNumber *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) IESLiveSearchFriendHighlightRangeModel *highlightRange;
@property (retain, nonatomic) NSNumber *hitType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
