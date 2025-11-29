@class NSString;

@interface CdnVideoResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int originalFormat;
@property (retain, nonatomic) NSString *flag;
@property (retain, nonatomic) NSString *cdnmsg;
@property (retain, nonatomic) NSString *requestFlag;

+ (void)initialize;

@end
