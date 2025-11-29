@class NSString, NSMutableDictionary, IESLiveAioLinkSendHttpRequest_FormPostRequestBody, IESLiveAioLinkSendHttpRequest_JsonPostRequestBody;

@interface IESLiveAioLinkSendHttpRequest : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSMutableDictionary *queries;
@property (readonly, nonatomic) unsigned long long queries_Count;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (readonly, nonatomic) unsigned long long headers_Count;
@property (nonatomic) int preferredResponseBodyContentType;
@property (readonly, nonatomic) int postRequestBodyOneOfCase;
@property (retain, nonatomic) IESLiveAioLinkSendHttpRequest_JsonPostRequestBody *jsonBody;
@property (retain, nonatomic) IESLiveAioLinkSendHttpRequest_FormPostRequestBody *formBody;

+ (id)descriptor;

@end
