@class NSString, NSNumber, NSArray;

@interface AWEIMChatRecommendVideoContext : AWEIMComponentContext

@property (copy, nonatomic) NSString *toUserSecID;
@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) NSNumber *convShortID;
@property (retain, nonatomic) NSArray *videos;

- (void).cxx_destruct;

@end
