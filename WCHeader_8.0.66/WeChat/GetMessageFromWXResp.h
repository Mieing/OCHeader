@class NSString, WXMediaMessage;

@interface GetMessageFromWXResp : BaseResp

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) WXMediaMessage *message;
@property (nonatomic) BOOL bText;

- (id)init;
- (void).cxx_destruct;

@end
