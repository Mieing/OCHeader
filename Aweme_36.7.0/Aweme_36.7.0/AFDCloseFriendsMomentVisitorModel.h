@class NSString, NSNumber, NSArray;

@interface AFDCloseFriendsMomentVisitorModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) unsigned long long expireTime;
@property (retain, nonatomic) NSNumber *viewerCount;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSNumber *ttlDays;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)awemeIDJSONTransformer;

- (void).cxx_destruct;

@end
