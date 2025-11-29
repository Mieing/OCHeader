@class NSData, BaseResponse;

@interface CheckShortLinkResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *wxaAppid;
@property (retain, nonatomic) NSData *wxaPath;
@property (retain, nonatomic) NSData *pageTitle;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSData *wxaNickName;

+ (void)initialize;

@end
