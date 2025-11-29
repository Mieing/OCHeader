@class NSArray, NSString, NSNumber;

@interface AWEUserDynamicLikeModel : NSObject

@property (copy, nonatomic) NSArray *likeList;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *avatarArray;
@property (retain, nonatomic) NSNumber *allLikeCount;
@property (retain, nonatomic) NSNumber *likeCount;
@property (retain, nonatomic) NSNumber *dynamicTime;
@property (copy, nonatomic) NSArray *itemIDList;

- (void).cxx_destruct;

@end
