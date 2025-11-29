@class NSString;

@interface AFDCloseFriendsRelationItem : AWEBaseApiModel

@property (retain, nonatomic) NSString *userID;
@property (nonatomic) long long cfTimeStamp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
