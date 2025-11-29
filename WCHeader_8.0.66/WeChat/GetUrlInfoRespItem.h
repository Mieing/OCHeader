@class NSString;

@interface GetUrlInfoRespItem : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *respUrl;
@property (nonatomic) unsigned int actionCode;
@property (nonatomic) unsigned int urlType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *extraInfo;
@property (nonatomic) unsigned int controlBits;

+ (void)initialize;

@end
