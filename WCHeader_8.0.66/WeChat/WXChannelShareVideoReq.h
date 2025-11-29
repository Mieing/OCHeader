@class NSString, NSData;

@interface WXChannelShareVideoReq : BaseReq

@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSData *extData;

+ (id)object;

- (void).cxx_destruct;

@end
