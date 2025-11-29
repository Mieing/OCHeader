@interface AWEFollowCountResponse : AWESocialRelationResponse

@property (nonatomic) long long mutualFollowCount;
@property (nonatomic) long long singleFollowCount;
@property (nonatomic) long long mutualAndSingleFollowCount;

- (BOOL)isEqual:(id)a0;

@end
