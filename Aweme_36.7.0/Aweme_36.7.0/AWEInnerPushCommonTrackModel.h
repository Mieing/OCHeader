@class NSString, NSNumber, NSDictionary;

@interface AWEInnerPushCommonTrackModel : NSObject

@property (copy, nonatomic) NSString *chatType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pushType;
@property (retain, nonatomic) NSNumber *ruleId;
@property (copy, nonatomic) NSDictionary *payloadDict;
@property (nonatomic) BOOL isRecommendedByServer;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
