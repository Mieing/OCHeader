@class NSString;

@interface AffSingleMigNotifyArgs : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned long long createTime;

+ (void)initialize;

@end
