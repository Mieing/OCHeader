@class NSString, WXMediaMessage;

@interface ShowMessageFromWXReq : BaseReq

@property (retain, nonatomic) WXMediaMessage *message;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;

- (void).cxx_destruct;

@end
