@interface AWEFriendListReadRequest : AWESocialRelationRequest

@property (nonatomic) long long count;
@property (nonatomic) long long cursor;
@property (nonatomic) long long recommendType;

- (id)initWithScene:(id)a0;

@end
