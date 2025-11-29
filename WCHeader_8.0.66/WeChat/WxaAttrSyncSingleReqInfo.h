@class NSString, NSData;

@interface WxaAttrSyncSingleReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
