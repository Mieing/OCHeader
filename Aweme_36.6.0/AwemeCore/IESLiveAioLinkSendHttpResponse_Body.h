@class NSData, NSDictionary;

@interface IESLiveAioLinkSendHttpResponse_Body : IESLivePBBaseMessage

@property (nonatomic) int contentType;
@property (copy, nonatomic) NSData *content;
@property (copy, nonatomic) NSDictionary *jsonContent;

+ (id)descriptor;

@end
