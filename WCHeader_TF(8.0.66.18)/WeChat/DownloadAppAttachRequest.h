@class BaseRequest, NSString;

@interface DownloadAppAttachRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int sdkVersion;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (retain, nonatomic) NSString *outFmt;
@property (nonatomic) int rotation;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int cdntype;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
