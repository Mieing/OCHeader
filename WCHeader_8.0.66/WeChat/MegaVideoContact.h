@class NSString, NSNumber;

@interface MegaVideoContact : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSNumber *isFollowed;
@property (retain, nonatomic) NSNumber *followState;

+ (id)makeWithUsername:(id)a0 avatarUrl:(id)a1 nickname:(id)a2 isFollowed:(id)a3 followState:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
