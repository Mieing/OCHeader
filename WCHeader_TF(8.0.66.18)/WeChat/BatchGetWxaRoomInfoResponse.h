@class JSAPIBaseResponse, NSString, NSMutableArray, BaseResponse;

@interface BatchGetWxaRoomInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *roomInfoList;
@property (retain, nonatomic) NSString *encryptedData;
@property (retain, nonatomic) NSString *iv;
@property (retain, nonatomic) NSString *cloudId;

+ (void)initialize;

@end
