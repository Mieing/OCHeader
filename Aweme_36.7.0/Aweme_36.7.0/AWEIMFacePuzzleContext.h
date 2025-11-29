@class NSString, NSDictionary;

@interface AWEIMFacePuzzleContext : NSObject

@property (nonatomic) long long conversationShortId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) long long serverMsgId;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *paramsForActivity;
@property (copy, nonatomic) NSString *activityEnterFrom;
@property (copy, nonatomic) NSDictionary *routerParams;

- (void).cxx_destruct;

@end
