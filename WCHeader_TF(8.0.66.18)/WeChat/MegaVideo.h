@class NSString, MegaVideoFinderBusiness, MegaVideoDesc;

@interface MegaVideo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) MegaVideoDesc *desc;
@property (nonatomic) unsigned int forwardCount;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int favCount;
@property (nonatomic) unsigned int friendLikeCount;
@property (nonatomic) unsigned int spamFlag;
@property (retain, nonatomic) NSString *videoNonceId;
@property (nonatomic) BOOL isTest;
@property (nonatomic) unsigned int readCount;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int favFlag;
@property (nonatomic) unsigned int urlValidDuration;
@property (nonatomic) unsigned int privateFlag;
@property (retain, nonatomic) NSString *debugMessage;
@property (nonatomic) unsigned int permissionFlag;
@property (retain, nonatomic) MegaVideoFinderBusiness *finder;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *spamWording;
@property (nonatomic) unsigned int bulletCount;
@property (nonatomic) unsigned int likeFlag;
@property (nonatomic) unsigned int warnFlag;
@property (retain, nonatomic) NSString *warnWording;

+ (void)initialize;

@end
