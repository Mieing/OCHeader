@class NSString, AffBizMedia;

@interface AffBizProfileFinderLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderNonceId;
@property (retain, nonatomic) NSString *exportId;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int liveStatus;
@property (retain, nonatomic) NSString *liveSourceTypeStr;
@property (nonatomic) unsigned int extFlag;
@property (retain, nonatomic) NSString *authIconUrl;
@property (retain, nonatomic) NSString *authIconTypeStr;
@property (retain, nonatomic) AffBizMedia *media;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *feedId;

+ (void)initialize;

@end
