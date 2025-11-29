@class NSString;

@interface AudioFeedsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int entrySwitch;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *h5Url;

+ (void)initialize;

@end
