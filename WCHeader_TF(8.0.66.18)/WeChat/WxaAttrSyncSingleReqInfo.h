@class NSString, NSData;

@interface WxaAttrSyncSingleReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

- (void)setAppid:(id)a0;
- (id)appid;
- (void)setLastAttrVersion:(id)a0;
- (id)lastAttrVersion;
- (void)setWxaUserName:(id)a0;
- (id)wxaUserName;

@end
