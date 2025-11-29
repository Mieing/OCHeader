@class NSString;

@interface WXChannelOpenEventReq : BaseReq

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *extInfo;

+ (id)object;

- (void).cxx_destruct;

@end
