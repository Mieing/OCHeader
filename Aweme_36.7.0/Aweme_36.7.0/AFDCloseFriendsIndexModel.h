@class NSString;

@interface AFDCloseFriendsIndexModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) long long index;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
