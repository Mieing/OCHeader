@class BaseRequest, NSString;

@interface MMSpamFaceVideoUploadReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userTicket;
@property (retain, nonatomic) NSString *jsonStr;
@property (retain, nonatomic) NSString *bioid;
@property (retain, nonatomic) NSString *videoCdnId;
@property (retain, nonatomic) NSString *cdnAesKey;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
