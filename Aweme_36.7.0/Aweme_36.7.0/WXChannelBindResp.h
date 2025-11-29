@class NSString, NSData;

@interface WXChannelBindResp : BaseResp

@property (copy, nonatomic) NSString *extMsg;
@property (copy, nonatomic) NSData *authBuffer;

- (void).cxx_destruct;

@end
