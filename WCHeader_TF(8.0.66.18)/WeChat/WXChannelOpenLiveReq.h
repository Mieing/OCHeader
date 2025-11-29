@class NSString;

@interface WXChannelOpenLiveReq : BaseReq

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;

+ (id)object;

- (void).cxx_destruct;

@end
