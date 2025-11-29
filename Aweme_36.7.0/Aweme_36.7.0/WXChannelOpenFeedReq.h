@class NSString;

@interface WXChannelOpenFeedReq : BaseReq

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) BOOL notGetReleatedList;

+ (id)object;

- (void).cxx_destruct;

@end
