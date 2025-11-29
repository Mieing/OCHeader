@class NSString, NSMutableArray, BaseResponse;

@interface CgiF2FDynamicCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *supervisionWording;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) NSMutableArray *showItems;
@property (nonatomic) unsigned int qrcodeLevel;

+ (void)initialize;

@end
