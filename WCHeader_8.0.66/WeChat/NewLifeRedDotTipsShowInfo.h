@class NSString, NSMutableArray, NSData;

@interface NewLifeRedDotTipsShowInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSMutableArray *multiIconUrls;
@property (retain, nonatomic) NSString *tipsId;
@property (retain, nonatomic) NSString *tipsUuid;
@property (retain, nonatomic) NSString *parent;
@property (nonatomic) unsigned int crtType;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *reportExtInfo;
@property (nonatomic) unsigned int messageTabType;
@property (nonatomic) unsigned int showExtInfoType;
@property (retain, nonatomic) NSData *showExtInfo;

+ (void)initialize;

@end
