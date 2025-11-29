@class WXPBGeneratedMessage, WACgiRequest, WACgiProfileInfo, WxaRuntimeLoginTransferResp, NSData;

@interface WACgiResponse : NSObject

@property (retain, nonatomic) WACgiRequest *cgiRequest;
@property (nonatomic) unsigned int uiMessage;
@property (retain, nonatomic) WXPBGeneratedMessage *pbResponse;
@property (retain, nonatomic) WxaRuntimeLoginTransferResp *transferResponse;
@property (retain, nonatomic) WACgiProfileInfo *cgiProfile;
@property (nonatomic) int stnErrCode;
@property (nonatomic) int stnErrType;
@property (retain, nonatomic) NSData *respData;

+ (id)responseFrom:(id)a0;

- (void).cxx_destruct;

@end
