@class NSString;

@interface KidsAcctInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned int isOnLine;

+ (void)initialize;

@end
