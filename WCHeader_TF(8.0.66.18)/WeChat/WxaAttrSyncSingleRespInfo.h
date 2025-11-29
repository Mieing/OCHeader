@class NSString, NSData, NSMutableArray;

@interface WxaAttrSyncSingleRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSMutableArray *updateInfoList;

+ (void)initialize;

- (void)setUpdateInfoList:(id)a0;
- (id)updateInfoList;
- (void)setLastAttrVersion:(id)a0;
- (id)lastAttrVersion;
- (void)setWxaUserName:(id)a0;
- (id)wxaUserName;

@end
