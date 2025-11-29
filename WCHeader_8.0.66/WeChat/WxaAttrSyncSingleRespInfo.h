@class NSString, NSData, NSMutableArray;

@interface WxaAttrSyncSingleRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSMutableArray *updateInfoList;

+ (void)initialize;

@end
