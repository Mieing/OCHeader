@class NSString, NSData, WXChannelBaseJumpInfo;

@interface WXChannelShareVideoReq : BaseReq

@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) NSData *extData;
@property (retain, nonatomic) WXChannelBaseJumpInfo *jumpInfo;

+ (id)object;

- (void).cxx_destruct;

@end
