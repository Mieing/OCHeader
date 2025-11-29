@class NSString, NSDictionary;

@interface AWESearchAIGCNodeBuildBaseParams : NSObject

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationRank;
@property (copy, nonatomic) NSString *searchUniqueId;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *searchKeyWord;

- (void).cxx_destruct;

@end
