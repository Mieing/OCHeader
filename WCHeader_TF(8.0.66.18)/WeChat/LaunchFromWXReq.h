@class NSString, WXMediaMessage;

@interface LaunchFromWXReq : BaseReq

@property (retain, nonatomic) WXMediaMessage *message;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *country;

- (id)init;
- (void).cxx_destruct;

@end
