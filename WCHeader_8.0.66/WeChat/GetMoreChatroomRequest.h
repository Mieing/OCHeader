@class BaseRequest, NSString, Lbs;

@interface GetMoreChatroomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomFilter;
@property (retain, nonatomic) Lbs *lbsInfo;
@property (nonatomic) unsigned int limit;

+ (void)initialize;

@end
