@class IESLiveAioLinkSendHttpResponse_Body, NSMutableDictionary;

@interface IESLiveAioLinkSendHttpResponse : IESLivePBBaseMessage

@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (readonly, nonatomic) unsigned long long headers_Count;
@property (retain, nonatomic) IESLiveAioLinkSendHttpResponse_Body *body;
@property (nonatomic) BOOL hasBody;

+ (id)descriptor;

@end
