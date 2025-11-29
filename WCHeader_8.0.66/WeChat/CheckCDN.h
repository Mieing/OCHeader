@class NSString;

@interface CheckCDN : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dataId;
@property (retain, nonatomic) NSString *fullMd5;
@property (retain, nonatomic) NSString *head256Md5;
@property (nonatomic) unsigned int fullSize;
@property (nonatomic) unsigned int dataSourceType;
@property (retain, nonatomic) NSString *dataSourceId;
@property (nonatomic) unsigned int isThumb;

+ (void)initialize;

@end
