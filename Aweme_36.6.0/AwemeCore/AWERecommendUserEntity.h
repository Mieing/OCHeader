@class NSString;

@interface AWERecommendUserEntity : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long feedType;
@property (nonatomic) BOOL hasShown;

- (void).cxx_destruct;

@end
